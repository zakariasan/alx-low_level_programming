## 0x09. C - Static libraries

![alt text](https://media.licdn.com/dms/image/C4D12AQHjjeKaE5LWBQ/article-cover_image-shrink_423_752/0/1620087295947?e=1696464000&v=beta&t=3c7p8QnCRcVq0dprDSwuUWvCI4jecnzaVekTNrDz8zc)

## :seedling: Learning Objectives

![alt text](https://media.licdn.com/dms/image/C4D12AQFoHsnhT48Ssw/article-inline_image-shrink_1000_1488/0/1620090857000?e=1696464000&v=beta&t=viKhjxaESZUeJWJ3u012og4lCc0jDEhvBnZwq3eMhEY)

- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of `ar`, `ranlib`, `nm`
 
## :astronaut: Resources

![alt text](https://miro.medium.com/v2/resize:fit:720/format:webp/1*ScnGz4wkZ5vU-_5qYUSAcA.png)

- Build your own C static library

```
ubuntu@ip-172-31-63-244:~/julien$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c

ubuntu@ip-172-31-63-244:~/julien$ ar -rc libschool.a *.o

ubuntu@ip-172-31-63-244:~/julien$ ar -t libschool.a
0-print_z.o
1-print_alphabet.o
2-print_tebahpla.o
3-print_base16.o
4-positive_or_not.o
5-print_number.o
print_char.o

ubuntu@ip-172-31-63-244:~/julien$ ranlib libschool.a

ubuntu@ip-172-31-63-244:~/julien$ cat main.c
void print_alphabet(void);
int main(void)
{
        print_alphabet();
        return (0);
}


ubuntu@ip-172-31-63-244:~/julien$ gcc main.c
/tmp/ccQa2r6L.o: In function `main':
main.c:(.text+0x5): undefined reference to `print_alphabet'
collect2: error: ld returned 1 exit status

ubuntu@ip-172-31-63-244:~/julien$ gcc main.c -L. -lschool -o alpha

ubuntu@ip-172-31-63-244:~/julien$ ./alpha
abcdefghijklmnopqrstuvwxyzubuntu

ubuntu@ip-172-31-63-244:~/julien$
```
- [Google](https://www.google.com/search?q=C+static+libraries&gws_rd=ssl#q=C+static+libraries)
- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)](https://www.youtube.com/watch?v=eW5he5uFBNM)

## :desktop_computer:  Tasks

* [0. A library is not a luxury but one of the necessities of life](./main.h) : Create the static library libmy.a containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

* [1. Without libraries what have we? We have no past and no future](./create_static_lib.sh) : Create a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the. c files that are in the current directory.



## :abacus: Advanced_part
 
-_- Next time!!
