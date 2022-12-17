# Infix-To-Postfix-Converter
A C++ program that converts infix mathematical expressions to postfix notation.


## Getting Started
To use this program, compile the main.cpp file and run the executable. The program will prompt the user to enter an infix mathematical expression. The user can also enter certain commands such as q to quit the program, ? to display a list of accepted commands, or simply press enter to evaluate the current expression. The program will then output the equivalent postfix expression and the result of evaluating the expression.

## Compiling and Running
To compile, use the following command on the directory that has the code
```
g++ main.cpp myStack.h myStack.cpp
```
To run it
```
./a.out
```


## Supported Operators
+ Parentheses: ( and )
+ Multiplication: *
+ Division: /
+ Addition: +
+ Subtraction: -


## Example
Input: (2+3)*4
Output: 23+4*
Result: 20
