
<h3 align="center">Project Title</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> Few lines describing your project.
    <br> 
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Deployment](#deployment)
- [Usage](#usage)
- [Built Using](#built_using)
- [TODO](../TODO.md)
- [Contributing](../CONTRIBUTING.md)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

The overarching goal of this laboratory is to delve into the realm of Shared Memory and OpenMP, shedding light on key concepts and techniques. The focus lies on harnessing compiler directives to engender concurrency, enabling the efficient utilization of modern multi-core architectures. Through the adept utilization of #pragmas (directives) and their associated clauses, this endeavor aims to unlock the potential of parallelism within threads. By unraveling the intricacies of thread-level parallelism, this laboratory strives to provide a comprehensive understanding of how to leverage these tools effectively, paving the way for optimized and responsive computational workflows.

## 🏁 Getting Started <a name = "getting_started"></a>

To effectively utilize OpenMP, it is imperative to begin by including the header <omp.h> in your code. When compiling with g++ / gcc, follow this syntax:
```
$gcc hello.cpp −fopenmp −o hello −lstdc++
$g++ hello.cpp −fopenmp −o hello
```
For execution, invoke the compiled executable based on your platform. Pass the desired number of threads as an argument, as demonstrated below:
```
$./hello 4
```
By adhering to these instructions, you will be poised to harness the power of OpenMP and control thread-level parallelism for enhanced computational performance.

### Prerequisites

Probably you have tu usea a VirtualMachine. You can download whaterver you want. We use VirtualBox. 

**For Unix-based Systems (Linux and macOS):**

1. **Check if OpenMP is installed:** On many Unix systems, OpenMP is already available as part of the standard development tools. You can check if it's installed by running the following command in the terminal:

   ```
   gcc --version
   ```

   If OpenMP is installed, you should see output that includes the `-fopenmp` option.

2. **Install GCC with OpenMP support:** If OpenMP is not installed or you want to ensure you have the latest version, you can install GCC (GNU Compiler Collection) with OpenMP support. On Debian/Ubuntu-based systems, you can use the following command:

   ```
   sudo apt-get install g++
   ```

   On Red Hat/Fedora-based systems, you can use:

   ```
   sudo yum install gcc-c++
   ```

3. **Compile with OpenMP:** Once you have GCC with OpenMP support installed, you can compile programs with OpenMP by including the `-fopenmp` option, as shown in the compilation instructions you provided earlier.


### Installing
Installation process of VirtualBox.

**Downloading and Setting Up VirtualBox:**

1. **Download VirtualBox:**
   Visit the official VirtualBox website at https://www.virtualbox.org/ and navigate to the "Downloads" section. Choose the appropriate version for your operating system (Windows, macOS, or Linux) and download the installer.

2. **Install VirtualBox:**
   Run the downloaded installer and follow the on-screen instructions to install VirtualBox on your computer.

**Importing and Using an Ubuntu .ova File:**

1. **Download Ubuntu .ova File:**
   Find a trusted source where you can download an Ubuntu .ova file. The .ova file is a virtual machine image that you'll import into VirtualBox. You can download Ubuntu .ova files from the official Ubuntu website or other reputable sources.

2. **Open VirtualBox:**
   Launch VirtualBox from your computer's applications menu.

3. **Import Appliance:**
   In the VirtualBox interface, go to the "File" menu and select "Import Appliance." Click the folder icon and browse to the location where you downloaded the Ubuntu .ova file.

4. **Import Settings:**
   Select the .ova file and click "Open." VirtualBox will display details about the virtual machine. Review the settings and configurations. You can adjust parameters like the amount of RAM allocated and the number of CPU cores.

5. **Import Virtual Machine:**
   Click "Import" to start the process of importing the Ubuntu virtual machine. This may take a few minutes.

6. **Start the Virtual Machine:**
   Once the import is complete, select the imported virtual machine from the VirtualBox Manager. Click the "Start" button to launch the virtual machine.

7. **Install Ubuntu:**
   The virtual machine will boot up, and you'll see the Ubuntu installation process. Follow the on-screen instructions to install Ubuntu within the virtual machine.

8. **Using Ubuntu:**
   After the installation is complete, you can log in to the Ubuntu virtual machine and start using it just like you would on a physical computer.

## 🎈 Usage <a name="usage"></a>

For others exercise, use the following comands:
```
riemann.c
gcc -o riemann riemann.c
```
Using threads: 
```
gcc -o riemann2 riemann2.c
./riemann2 a b threadsD
```


## 🚀 Deployment <a name = "deployment"></a>

Note: repeat the same comands for the next excercises that you need to compile.

## ⛏️ Built Using <a name = "built_using"></a>

- [VirtualBox]( https://www.virtualbox.org/) - VirtualMachine
- [Ubuntu]( https://ubuntu.com/download/desktop) - .ova Desktop


## ✍️ Authors <a name = "authors"></a>
- Pablo Escobar - 2010936
- Angel Higueros - 20460
- Mariana David - 201055

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- CODE GRANTED BY THE LEADING PROFESSOR IN: https://github.com/esc20936/lab1_paralela
