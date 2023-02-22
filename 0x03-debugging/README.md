# Resources

## Read or watch:

   * Debugging
   * Rubber Duck Debugging

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.
# Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
General

  *  What is debugging
  *  What are some methods of debugging manually
  *  How to read the error messages

# Copyright - Plagiarism

  *  You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
  *  You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
  *  You are not allowed to publish any content of this project.
  *  Any form of plagiarism is strictly forbidden and will result in removal from the program.

# Requirements
## General

   * Allowed editors: vi, vim, emacs
   * All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
   * All your files should end with a new line
   * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
   * A README.md file at the root of the repo, containing a description of the repository
   * A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about

### Tasks

#### 0. Multiple mains 
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
```C
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
```
Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0. </br>
You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task 0 to compile with this main file to test locally.
  *  You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
  *  You are not allowed to add or remove lines of code, you may change only one line in this task.

#### 1. Like, comment, subscribe 
Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
  *  Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
  *  You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.
```C
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
```
