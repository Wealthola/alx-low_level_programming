#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 * (Majek = sum, Olaitan = i)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int Majek = 0;
	int Olaitan = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (; Majek < n; Majek++)
		Olaitan += va_arg(ap, int);
	va_end(ap);
	return (Olaitan);
}
