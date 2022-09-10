#include<stdio.h>
/**
 * main - print all possible combination of two-digit number
 * Return: 0
 */
int main(void)
{
	int i, e;
	int a, b, c, d;

	for(i = 0; i < 100; i++)
	{
		a = i / 10; 
		b = i % 10;

		for (e = 0; e < 100; e++)
		{
			c = e / 10;
			d = e % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
