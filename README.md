# `ifcc` : Compiler for a subset of the C language

## 1. Abstract
This document details how to use the ifcc compiler. `ifcc` is a compiler built to compile a subset of the C language, which we define in our `ifcc.g4` grammar. 

Our compiler translates the instructions in C language to `x86` assembly language, and has been written with the framework `Antlr4` with the C++ langage. It has been constrcuted through an agile project management with short sprints.

For information on how to use the compiler, we invite you to read the user documentation, and if you want to know how the compiler was coded and the development choices made, we invite you to read the developer documentation.

## 2. Team Members
- ALAMI Meryem : meryem.alami-kasri@insa-lyon.fr
- AL ZAHABI Hanaa : hanaa.al-zahabi@insa-lyon.fr
- BELAHCEN Basma : basma.belahcen@insa-lyon.fr
- CHELLAOUI Adam : adam.chellaoui@insa-lyon.fr
- GREVAUD Paul : paul.grevaud@insa-lyon.fr
- GUILLEVIC Marie : marie.guillevic@insa-lyon.fr
- M’BARECK Aichetou : aichetou.m-bareck@insa-lyon.fr
- PREVOT Jade : jade.prevot@insa-lyon.fr
- WAQIF Salma : salma.waqif@insa-lyon.fr


## 3. Prerequisites
### A) User mode
In order to use the ifcc compiler, you need to have a Linux environment, and an Intel processor as the assembly language destination is `x86`.

### B) Developper mode
If you want to complete our work by adding features to our compiler for example, you have to first clone the git repo, and have a valid Antlr4 installation on your computer according to your environment :

- `BV VMWare Horizon` on Linux-2D : you don't have to do anything everything is already installed, to compile use the script ./compiler/runmake_fedora.sh
- `MacOS` : use the script ./install-antlr.sh, to compile use directly make in ./compiler/
- `Ubuntu` or `WSL/Ubuntu` machine : install the packages indicated in the beginning of the file ./compiler/runmake_ubuntu.sh, to compile use the script ./compiler/runmake_ubuntu.sh. Warning under WSL, to be able to use the derivation tree display feature, you will have to install the GWSL package from Microsoft Store. In case the tests fail, try the following command "dos2unix ifcc-wrapper.sh". You may need to install dos2unix using the command "sudo apt dos2unix".
- Other `Linux` distribution: look if the distribution offers packages for Antlr4 and Antlr4-runtime, if so you will avoid recompiling everything. For example under Fedora, these are the antlr4, antlr4-cpp-runtime and antlr4-cpp-runtime-devel packages. Otherwise run the script ./install-antlr.sh.

## 4. Features suported
### A) Types
- `int`
- `char`
- `void`

### B) Operators
- Plus / Minus / Multiply / Divide
- AND / OR / XOR
- < / > / <= / >= / == / != / =

### C) Structures
- If/Else
- While
- Functions with at most 6 arguments
- One-dimensional arrays of integer or char

## 5. How to use it

To compile your file `file.c`, located in a child repositary of where your compiler is, you exectute the command :
```
$ ifcc file.c
```
## 6. Code exemples
Here are some examples of the code that our compiler is able to manage :

**Selection sort of an array**
```c
#include <stdio.h>

int main(){
    int array[3];
    int size = 3;
    array[0] = 4;
    array[1] = 7;
    array[2] = 3;
    int step, i = 0;
    while(step<size){
        int min_idx = step;
        i = step + 1;
        while(i<size){
            if (array[i] < array[min_idx]){
                min_idx = i;
                }else{}
            i =i + 1;
        }
        int temp;
        temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
        step = step + 1;
    }
    return array[0];
}
```
**Computing of the power function for positive integers**
```c
/* computes the power p>0 of an integer n>0 */
  int power(int n,int p) {
    int res=n;
    int i=0;
    while(i<p-1) {
      res = res*n;
      i = i+1;
    }
    return res;
  }
  int main() {
    int n=5;
    int p=4;
    int res = power(n,p);
    return res;
  }
```
## 7. Running tests

A test environment is located in the tests subdirectory and allows the automation of functional tests. The tests are placed in the tests/tests subdirectory, in folders that are named after the tested functionalities, in .c format. This C source code is compiled with gcc and with our ifcc compiler. The binaries are executed and the results are compared with the output code and the standard output. If both behave in the same way, the test is validated.

In order to run the tests already implemented, you have to execute depending of your configuration :

 - If you are on WSL or MacOs :
``` 
$ python3 ifcc-test.py tests/testfiles
```
 - If you are on Ubuntu : 
``` 
$ ./ifcc-test tests/testfiles
```

If you want to add a new test or a set or tests, add the test file (file.c) or the directory of tests in `tests/testfiles`.

The python script to run the tests checks that the output of our **ifcc** compiler is the same as that of the **gcc** compiler.

