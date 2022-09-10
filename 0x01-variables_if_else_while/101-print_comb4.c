#include<stdio.h>
/**
 * main - print all posible different combination of three digit
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 36; i	< 50)
	{
		for (j = 37; j < 50)
		{
			for (k = 38; k < 50)
			{
				if (j > i && i > k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 40 || j != 41)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

