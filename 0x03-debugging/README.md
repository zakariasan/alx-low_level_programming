## 0x03. C - Debugging

![alt text](https://realpython.com/cdn-cgi/image/width=960,format=auto/https://files.realpython.com/media/Python-Debugging-With-Pdb_Watermarked.ca76b26fbe1c.jpg)

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

## :astronaut: Resources


- [Debugging](./https://en.wikipedia.org/wiki/Debugging).
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/).

## :desktop_computer:  Tasks

* [0. Multiple mains](./0-main.c) : Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of 0.
* [1. Like, comment, subscribe](./1-main.c) : Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.
* [2. 0 > 972?](./2-largest_number.c) : Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

```
	*carrie@ubuntu:/debugging$ cat 2-largest_number.c
	#include "main.h"
	/**
 	* largest_number - returns the largest of 3 numbers
 	* @a: first integer
 	* @b: second integer
 	* @c: third integer
 	* Return: largest number
 	*/

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$``` 

* [3. Leap year](./3-print_remaining_days.c) :  Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.


## :abacus: Advanced_part
Nop for this project
