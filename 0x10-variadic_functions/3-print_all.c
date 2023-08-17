#include "variadic_functions.h"
#include <stdio.h>
/**
 * put_char - print char
 * @c: char
 */
void put_char(char c) {putchar(c);}
/**
 * put_int - print int
 * @c: int
 */
void put_int(int c) {printf("%d", c);}
/**
 * put_int - print int
 * @c: int
 */
void put_float(float c) {printf("%f", c);}
/**
 * put_int - print int
 * @c: int
 */
void put_str(char *c)
{
	(c) ? printf("%s", c) : printf("(nil)");
}

/**
 * print_strings - print str.
 * @separator: string to be printed between str.
 * @n: nbr of parms.
 *
 * Description: function that prints strings, followed by a new line.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap_arg;
	char *str;
	ops_t ops[] = {
		{"c", (void *)put_char},
		{"i", (void *)put_int},
		{"f", (void *)put_float},
		{"s", (void *)put_str},
		{NULL, NULL}
	};

	if (n > 0 && separator)
	{
		va_start(ap_arg, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap_arg, char *);
			(str) ? printf("%s", str) : printf("(nil)");
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
		va_end(ap_arg);
	}
}
