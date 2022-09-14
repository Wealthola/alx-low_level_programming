#include "main.h"
/**
 * times_table - print the 9 times table tarting with 0
 */
void times_table(void)
{
	int tables = o;
	int lenght;
	int multiplication;

	while (tables < 10)
	{
		lenght = 0;
		while (lenght < 10)
		{
			int first, second;

			multiplication = lenght + tables;
			first = multiplication / 10;
			second = multiplication % 10;
			if (first > 0)
			{
				_putchar(48 + first);
			}
			_putchar(48 + second);
			lenght++;
			_putchar(',');
			_putchar(' ');
		}
		tables++;
		_putchar('\n');
	}
}
