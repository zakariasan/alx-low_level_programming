## 0x0A. C - argc, argv 

![alt text](https://azrael.digipen.edu/~mmead/www/Courses/CS225/ArgcArgv-1.gif)

## :seedling: Learning Objectives

- How to use arguments passed to your program
- What are two prototypes of `main` that you know of, and in which case do you use one or the other
- How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

## :astronaut: Resources

- [Arguments to main ](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html).
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html).
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24).
- [how to compile with unused variables](https://www.google.com/webhp?q=unused+variable+C).

## :desktop_computer:  Tasks

* [0. It ain't what they call you, it's what you answer to](./0-whatsmyname.c) :Write a program that prints its name, followed by a new line. If you rename the program, it will print the new name, without having to compile it again , You should not remove the path before the name of the program
* [1. Silence is argument carried out by other means](./1-args.c) : Write a program that prints the number of arguments passed into it. Your program should print a number, followed by a new line.
* [2. The best argument against democracy is a five-minute conversation with the average voter](./2-args.c) : Write a program that prints all arguments it receives. All arguments should be printed, including the first one, Only print one argument per line, ending with a new line
* [3. Neither irony nor sarcasm is argument](./3-mul.c) : Write a program that multiplies two numbers. 
* [4. To infinity and beyond](./4-add.c) : Write a program that adds positive numbers. 

## :abacus: Advanced_part
 
* [5. Minimal Number of Coins for Change](./100-change.c) : Write a program that prints the minimum number of coins to make change for an amount of money.

```
julien@ubuntu:~/0x0A. argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
julien@ubuntu:~/0x0A. argc, argv$ ./change 
Error
julien@ubuntu:~/0x0A. argc, argv$ ./change 10
1
julien@ubuntu:~/0x0A. argc, argv$ ./change 100
4
julien@ubuntu:~/0x0A. argc, argv$ ./change 101
5
julien@ubuntu:~/0x0A. argc, argv$ ./change 13
3
julien@ubuntu:~/0x0A. argc, argv$ 

```
