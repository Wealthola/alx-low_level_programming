#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *olaitan;
	int wealth, i;

	if (min > max)
		return (NULL);

	wealth = max - min;
	olaitan = malloc((wealth + 1) * sizeof(int));
	if (olaitan == NULL)
		return (NULL);

	for (i = 0; i <= wealth; i++)
		olaitan[i] = min++;

	return (olaitan);
}
