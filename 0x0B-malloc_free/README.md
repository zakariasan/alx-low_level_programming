## 0x0B. C - malloc, free

![alt text](https://ddgimgs-f43e.kxcdn.com/2823639/wvcghq_be267e7bd8f28924168c92bc9bb809970f4fee64.jpg )

## :seedling: Learning Objectives

- What is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when use `malloc`
- How to use `valgrind` to check for memory leak

## :astronaut: Resources

![alt text](https://www.vishalchovatiya.com/wp-content/uploads/How-do-malloc-free-work-vishal-chovatiya.png )

- [0x0a - malloc & free - quick overview.pdf]( https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230809%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230809T082153Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d175d096bc6cb362caa840f881de4b800130854c23876f809fb66c6e070c8867).
- [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xDVC3wKjS64).

## :desktop_computer:  Tasks

* [0. Float like a butterfly, sting like a bee](./0-create_array.c) : Write a function that creates an array of chars, and initializes it with a specific char. Prototype: `char *create_array(unsigned int size, char c);`
* [1. The woman who has no imagination has no wings](./1-strdup.c) : Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. Prototype: `char *_strdup(char *str);`
* [2. He who is not courageous enough to take risks will accomplish nothing in life](./2-str_concat.c) : Write a function that concatenates two strings. Prototype: `char *str_concat(char *s1, char *s2);`
* [3. If you even dream of beating me you'd better wake up and apologize](./3-alloc_grid.c) : Write a function that returns a pointer to a 2 dimensional array of integers. Prototype: `int **alloc_grid(int width, int height);`
* [4. It's not bragging if you can back it up](./4-free_grid.c) : Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function. Prototype: `void free_grid(int **grid, int height);`

## :abacus: Advanced_part
 
* [5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](./100-argstostr.c) : Write a function that concatenates all the arguments of your program. Prototype: `char *argstostr(int ac, char **av);`
* [6. I will show you how great I am](./101-strtow.c) : Write a function that splits a string into words. Prototype: `char **strtow(char *str);`


