#include<stdio.h>
/**
 * main - print number between 00 and 89
 * Return: 0
 */
int main(void)
{
	int up = 0;
	int down = 1;

	while (up < 10)
	{
		while (down < 10)
		{
				putchar(48 + up);
				putchar(48 + down);
				if (up != 10 - 2)
				{
					putchar(',');
					putchar(' ');
				}
				down++;
		}
			up++;
			down = up + 1;
	}
	putchar('\n');
	return (0);
}
