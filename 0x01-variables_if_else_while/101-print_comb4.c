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

	for (i = 36; i	<= 50; i++)
	{
		for (j = 37; j <= 50; j++)
		{
			for (k = 38; k <= 50; k++)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 47 || j != 49 || k != 50)
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

