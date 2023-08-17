#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * put_char - print char.
 * @c: char
 */
void put_char(va_list c) {printf("%c", va_arg(c, int)); }
/**
 * put_int - print int.
 * @c: int
 */
void put_int(va_list c) {printf("%d", va_arg(c, int)); }
/**
 * put_float - print float.
 * @c: float
 */
void put_float(va_list c) {printf("%f", va_arg(c, double)); }
/**
 * put_str - print str.
 * @c: str
 */
void put_str(va_list c)
{
	char *str;

	str = va_arg(c, char *);
	printf("%s", (str != NULL) ? str : "(nil)");
}
/**
 * print_all - print all Typo.
 * @format:type of args
 *
 * Description: function that prints all type, followed by a new line.
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	unsigned int j;
	char *sp;
	va_list ap_arg;
	op_t tmp[] = {
		{'c', put_char},
		{'i', put_int},
		{'f', put_float},
		{'s', put_str},
		{0, NULL}
	};

	va_start(ap_arg, format);
	i = 0;
	sp = "";
	while (format[i] && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == tmp[j].typo)
			{
				printf("%s", sp);
				tmp[j].fprint(ap_arg);
				sp = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap_arg);
	printf("\n");
}
