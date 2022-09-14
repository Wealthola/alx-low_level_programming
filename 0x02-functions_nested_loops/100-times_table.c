#include "main.h"
/**
 * print_times_table - prints the n times table starting with 0
 * @n: numbers of table
 */
void print_times_table(int n)
{
	int tables = 0;
	int lenght;
	int multiplication;

	while (tables < n)
	{
		lenght = 0;

		while (lenght < n)
		{
			int first, second;

			multiplication = lenght * tables;
			first = multiplication / 10;
			second = multiplication % 10;
			if (first > 0)
			{
				_putchar(48 + first);
			}
			_putchar (48 + second);
			lenght++;
			_putchar(',');
			_putchar(' ');
		}
		tables++;
		_putchar('\n');
	}
}

