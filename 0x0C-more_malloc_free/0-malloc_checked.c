#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: An unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	int *olaitan;

	olaitan = malloc(b);
	if (olaitan == NULL)
		exit(98);
	return (olaitan);
}
