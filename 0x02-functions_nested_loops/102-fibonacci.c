#include <stdio.h>
/**
 * main - print first 50 fibonacci
 * Return: 0 always
 */
int main(void)
{
	int n = 0;
	long int tmp;
	long int a, b, sum;

	a = 1;
	b = 2;

	while (n < 50 - 2)
	{
		tmp = a + b;
		a = b;
		b = tmp;
		if (tmp % 2 == 0)
		{
			sum += tmp;
		}
		if (tmp > 4000000)
		{
			 break;
		}
		n++;
	}
	printf("%ld\n", sum);
	return (0);
}
