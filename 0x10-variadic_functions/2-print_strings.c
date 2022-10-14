#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * ap = Majek, i = Olaitan, string = Wealth (Declaration).
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list Majek;
	unsigned int Olaitan = 0;
	char *Wealth;

	va_start(Majek, n);
	for (; Olaitan < n; Olaitan++)
	{
		Wealth = va_arg(Majek, char*);
		if (Wealth == NULL)
			printf("(nil)");
		else
			printf("%s", Wealth);
		if (separator == NULL)
			continue;
		if (Olaitan < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(Majek);
}
