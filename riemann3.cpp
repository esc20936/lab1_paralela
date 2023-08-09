/*----------------------------------------------
 * riemann2.c - calculo de area bajo la curva con suma local y global
 *----------------------------------------------
 * Sumas de Riemann para calcular la integral f(x) con suma local y global
 *
 * Date:  2021-09-22
 */

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>  // Include OpenMP header

#define A 1
#define B 40
#define N 1000000  // Use integer value for N, not floating-point

double f(double x);     //La funcion a integrar
double trapezoides(double a, double b, int n);

int main(int argc, char* argv[]) {
  double integral;
  double x;
  double local_sum;
  double local_a, local_b;
  double global_sum = 0.0;  // Global sum as a regular double
  int i, local_n;
  double a=A, b=B;
  int n=N;
  double h;
  int num_threads = 4;  // Default number of threads

  if(argc > 1) {
    a = strtol(argv[1], NULL, 10);
    b = strtol(argv[2], NULL, 10);
    if(argc > 3) {
      num_threads = strtol(argv[3], NULL, 10);
    }
  }

  //---- Aproximacion de la integral
  h = (b-a)/n;

  omp_set_num_threads(num_threads);

  #pragma omp parallel private(local_sum, local_a, local_b)
  {
    double partial_integral = 0.0;
    int k;
    int id = omp_get_thread_num();
    int threads = omp_get_num_threads();

    local_n = n / threads;
    local_a = a + id * local_n * h;
    local_b = local_a + local_n * h;

    printf("Hilo %d de %d, calculando desde %f hasta %f\n", id, threads, local_a, local_b);
    
    local_sum = trapezoides(local_a, local_b, local_n);

    #pragma omp critical
    {
      global_sum += local_sum;
    }
  }

  integral = (global_sum + (f(a) + f(b)) / 2.0) * h;

  printf("Con n = %d trapezoides, utilizando %d threads, nuestra aproximacion \n",n, num_threads);
  printf("de la integral de %f a %f es = %.10f\n", a,b,integral);

  printf("Suma global = %.10f\n", global_sum);
  return 0;
}/*main*/

//------------------------------------------
// trapezoides
//
// Estimar la integral mediante sumas de Riemann
// Input: a,b,n,h
// Output: integral
//------------------------------------------
double trapezoides(double a, double b, int n) {
  double integral, h;
  int k;

  //---- Ancho de cada trapezoide
  h = (b-a)/n;
  //---- Valor inicial de la integral (valores extremos)
  integral = (f(a) + f(b)) / 2.0;

  for(k = 1; k <= n-1; k++) {
    integral += f(a + k*h);
  }
  integral = integral * h;

  return integral;
}/*trapezoides*/

//------------------------------------------
// f
//
// Funcion a ser integrada
// Input: x
//------------------------------------------
double f(double x) {
  double return_val;

  return_val = x*x;

  return return_val;
}/*f*/
