#include "variadic_functions.h"

/**
 * sum_them_all - sum of params.
 * @n: nbr of parms.
 *
 * Description:function that returns the sum of all its parameters.
 * Return: sum of 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap_arg;

	sum = 0;
	if (n <= 0)
		return (sum);
	va_start(ap_arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap_arg, int);
	va_end(ap_arg);
	return (sum);
}
