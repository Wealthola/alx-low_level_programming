#include "main.h"
/**
 * swap_int - swap two int values
 * @a: first int
 * @b: second int
 * Return: null
 */
void swap_int(int *a, int *b);
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
