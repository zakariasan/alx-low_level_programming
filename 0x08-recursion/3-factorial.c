#include "main.h"

/**
* factorial - fact nbr
* @n: nbr to fact.
*
* Description : function that returns the factorial of a given number.
* Return: fact(n). or 0 or 1
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
