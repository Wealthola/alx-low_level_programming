#include "main.h"
/**
 * swap_int - swap two int values
 * @a: integer pointer
 * @b: integer pointer
 * Return: null
 */
void swap_int(int *a, int *b);
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
