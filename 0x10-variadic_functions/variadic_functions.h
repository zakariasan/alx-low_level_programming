#ifndef _VARIADIC_FUNC_H_
#define _VARIADIC_FUNC_H_

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct ops
{
	char *ops;
	void (*f)(void *);
}		ops_t;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
