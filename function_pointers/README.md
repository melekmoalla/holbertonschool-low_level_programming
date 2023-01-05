<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  
</div>

# C - Function pointers

# Resources

Read or watch:

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

# General

- What are function pointers and how to use them
- What does a function pointer exactly hold
- Where does a function pointer point to in the virtual memory

# Overview

Function pointers in C are variables that can store the memory address of functions and can be used in a program to create a function call to functions pointed by them. Function pointers in C need to be declared with an asterisk symbol and function parameters (same as the function they will point to) before using them in the program. Declaration of function pointers in C includes the return type and data type of different function arguments.

An asterisk symbol before the pointer name differentiates the function pointer from a usual function declaration. Functions can aspect function pointer as a function argument and later call it inside the function body. Such passed functions are called callback functions.

# Scope

* This article explains how we can use pointers to point (store the address) to a function.
* This article discusses how function pointers are declared, referenced to a function, and how these pointers can create function calls.
* What are callback functions, and how functions can be passed to other functions as an argument and other ways to use function pointers in the program.
* This article also discusses how pointers are passed and returned from a function.

# more information

A block of memory is reserved by the compiler when we declare a variable. To store these memory addresses, C allows programmers to use the concept of pointers that can hold the address of any other data type. Pointers can be de-referenced using the asterisk * operator to get the value stored in an address. Like variables, instructions of a function are also stored in memory and have an address. A pointer pointing to the address of a function is called function pointer. A function pointer in C can be used to create function calls to the function they point to just like a normal function.

In this article, we will understand how function pointers in C are declared and can be used to create calls to the function to which they point. We will also understand how we can create an array of function pointers in C and how a function can be passed to another function as an argument with the help of function pointers. In the end, we will discuss how pointers are passed and returned from user-defined functions. Before jumping to function pointers let us see through an example of how functions have a memory address like variables.

[-> link_of_information](https://www.scaler.com/topics/c/function-pointer-in-c/) 


## Author

*  https://github.com/melekmoalla