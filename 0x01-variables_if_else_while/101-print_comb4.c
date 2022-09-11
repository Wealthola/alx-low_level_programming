#include<stdio.h>
/**
 * main - print all posible different combination of three digit
 * Return: 0
 */
int main(void)
{
	int left = 0;
	int mid = 1;
	int right = 2;

	while (left < 10)
	{
		while (mid < 10)
		{
			while (right < 10)
			{
					putchar(48 + left);
					putchar(48 + mid);
					putchar(48 + right);
					if (left != 10 - 3)
					{
						putchar(',');
						putchar(' ');
					}
					right++;
			}
			mid++;
			right = mid + 1;
		}
		left++;
		mid = left + 1;
		right = mid + 1;
	}
	putchar('\n');
	return (0);
}

