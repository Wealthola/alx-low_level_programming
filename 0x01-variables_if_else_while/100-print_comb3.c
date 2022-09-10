#include<stdio.h>
/**
 * main - print number between 00 and 89
 * Return: 0
 */
int main(void)
{
	int i, d;

	i = 50;
	d = 50;

	while(d < 62)
	{
		i = 50;
		while(i < 62)
		{
			if (d != i && d < i)
			{
				putchar(d);
				putchar(i);
				if (i == 61 && d == 60)
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
