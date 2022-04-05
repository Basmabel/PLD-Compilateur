# `ifcc` : Compiler for a subset of the C language

## 1. Abstract
This document details how to use the ifcc compiler. `ifcc` is a compiler built to compile a subset of the C language, which we define in our `ifcc.g4` grammar. Our compiler translates the instructions in C language to `x86` assembly language, and has been written with the framework `Antlr4` with the C++ langage. It has been constrcuted through an agile project management with short sprints.

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
In order to use the ifcc compiler, you need to have a unix environment XXXXXX.

## 4. Features suported
### A) Types
- `int`
- `char`
- `void`

### B) Operations
- Plus / Minus / Multiply / Divide
- AND / OR / XOR

### C) Structures
- If/Else
- While
- Functions with an unlimited number of arguments
- One-dimensional arrays of integers or char

## 5. How to use it

To compile your file `file.c`, located in a child repositary of where your compiler is, you exectute the command :
```
$ ifcc file.c
```
## 6. Code exemples
**Fibbonnaci recursive function**
```c

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
  int n,m;
  n = 5;
  m = fibbonacci(n);
  return m;
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

In order to run the tests already implemented, you have to execute depending of your configuration :

 - If you are on WSL or MacOs :
``` 
$ python3 ifcc-test.py tests/testfiles
```
 - If you are on Ubuntu : 
``` 
$ ./ifcc-wrapper.sh tests/testfiles
```

If you want to add a new test or a set or tests, add the test file (file.c) or the directory of tests in `tests/testfiles`.

The python script to run the tests checks that the output of our **ifcc** compiler is the same as that of the **gcc** compiler.

