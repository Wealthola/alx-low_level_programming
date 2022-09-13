#include "main.h"
/**
 * print sign - function to check for a sign of a number
 * @n: is the int that will use for the argument of the function
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	 if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
