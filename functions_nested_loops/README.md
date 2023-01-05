<div align=center>  
    <img  
    style="text-align:center"  
    src="https://raw.githubusercontent.com/coding-max/hbtn_config/main/assets/head_low-level.png"  
    alt="Holberton School"/>  
</div>

# C - Functions, nested loops

Read or watch:

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06) (stop at 14:00)](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- [What is a function prototype (read only the “Function prototype paragraph”)](https://www.programiz.com/c-programming/c-user-defined-functions#:~:text=A%20function%20prototype%20is%20simply,be%20used%20in%20the%20program.)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files (stop before the “Once-Only Headers” paragraph)](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

Learning Objectives:

the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

# Requirements

General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options - \*Wall -Werror -Wextra -pedantic -std=gnu8

# More Info

You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

# Nested Loops

This project demonstrates the use of functions and nested loops in C programming. The program includes a number of functions that perform various tasks, as well as nested loops that iterate over multiple sets of values.

A loop inside another loop is called a nested loop. You can use nested loops to perform a task multiple times, or to perform a task on a list of items.

# Nested Loops

The program also includes examples of nested loops. The following code demonstrates a nested loop that iterates over the values 1 through 4 in the outer loop, and the values 1 through 3 in the inner loop:

````
for (int i = 1; i <= 4; i++) 
{
  for (int j = 1; j <= 3; j++)
   {
    printf("%d %d\n", i, j);
  }
}
````
This code will output the following:

````
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3
4 1
4 2
4 3
````

I hope this README has been helpful in explaining the functions and nested loops used in this project

## Author

- https://github.com/melekmoalla
