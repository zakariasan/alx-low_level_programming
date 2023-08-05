## 0x07. C - Even more pointers, arrays and strings 

![alt text](https://beginnersbook.com/wp-content/uploads/2014/01/pointer-to-pointer.png)

![alt text](https://static.javatpoint.com/cpages/images/memory-layout-in-c.png)


## :seedling: Learning Objectives

- What are pointers to pointers and how to use them
- What are multidimensional arrays and how to use them
- What are the most common C standard library functions to manipulate strings

## :astronaut: Resources 

![alt text](https://intranet.alxswe.com/images/contents/low_level_programming/projects/happy-clapping.gif)


- [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm ).
- [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/ ).
- [ Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm ).
- [Two dimensional (2D) arrays in C programming with example ](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/ ).


## :desktop_computer:Tasks

* [0. memset](./0-memset.c) : Write a function that fills memory with a constant byte.Run `man memset` to learn more.  
* [1. memcpy](./1-memcpy.c) : Write a function that copies memory area. Run `man memcpy` to learn more.
* [2. strchr](./2-strchr.c) : Write a function that locates a character in a string.Run `man strchr` to learn more.
* [3. strspn](./3-strspn.c) : Write a function that gets the length of a prefix substring.Run `man strspn` to learn more.
* [4. strpbrk](./4-strpbrk.c) : Write a function that searches a string for any of a set of bytes. Run `man strpbrk` to learn more.
* [5. strstr](./5-strstr.c) : Write a function that locates a substring.Run `man strstr` to learn more.
* [6. Chess is mental torture](./7-print_chessboard.c) : Write a function that prints the chessboard. Prototype: `void print_chessboard(char (*a)[8]);`
* [7. The line of life is a ragged diagonal between duty and desire](./8-print_diagsums.c) :Write a function that prints the sum of the two diagonals of a square matrix of integers. Prototype: `void print_diagsums(int *a, int size);` 

```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$
```
## :abacus: Advanced_part
 

* [8. Double pointer, double fun](./100-set_string.c) : Write a function that sets the value of a pointer to a char.Prototype: `void set_string(char **s, char *to);`
* [9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure](./101-crackme_password) : 
Create a file that contains the password for the ![crackme2](https://github.com/alx-tools/0x06.c) executable.
