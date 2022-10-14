#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 * (Majek = i, Olaitan = nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int Majek = 0;
	int Olaitan;

	va_start(ap, n);
	for (; Majek < n; Majek++)
	{
		Olaitan = va_arg(ap, int);
		printf("%d", Olaitan);
		if (separator == NULL)
			continue;
		if (Majek < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
