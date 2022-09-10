#include<stdio.h>
/**
 * main - print all posible different combination of three digit
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i	<= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 0; k++)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 6 || j != 7 || k != 8)
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

