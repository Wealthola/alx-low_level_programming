#include<stdio.h>
/**
 * main - print number between 00 and 89
 * Return: 0
 */
int main(void)
{
	int i, d;

	i = 48;
	d = 48;

	while (d < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (d != i && d < i)
			{
				putchar(d);
				putchar(i);
				if (i == 57 && d == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			d++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
