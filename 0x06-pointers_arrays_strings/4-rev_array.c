#include "main.h"
/**
 * reverse_array - reverses array of integer
 * @a: input array
 * @n: lenght of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int d, tmp, i = n;

	for (i--, d = 0; d < n / 2; d++, i--)
		tmp = a[d], a[d] = a[i], a[i] = tmp;
}
