
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

What things you need to install the software and how to install them.

```
Give examples
```

### Installing

A step by step series of examples that tell you how to get a development env running.

Say what the step will be

```
Give the example
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo.

## 🔧 Running the tests <a name = "tests"></a>

Explain how to run the automated tests for this system.

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## 🎈 Usage <a name="usage"></a>

Add notes about how to use the system.

## 🚀 Deployment <a name = "deployment"></a>

Add additional notes about how to deploy this on a live system.

## ⛏️ Built Using <a name = "built_using"></a>

- [MongoDB](https://www.mongodb.com/) - Database
- [Express](https://expressjs.com/) - Server Framework
- [VueJs](https://vuejs.org/) - Web Framework
- [NodeJs](https://nodejs.org/en/) - Server Environment

## ✍️ Authors <a name = "authors"></a>
- Pablo Escobar - 2010936
- Angel Higueros - 20460
- Mariana David - 201055

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Hat tip to anyone whose code was used
- Inspiration
- References
