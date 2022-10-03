#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
 */

int **alloc_grid(int width, int height)
{
	int **grid, majekodunmi, olaitan;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (majekodunmi = 0; majekodunmi < height; majekodunmi++)
	{
		grid[majekodunmi] = malloc(width * sizeof(int));
		if (grid[majekodunmi] == NULL)
		{
			while (majekodunmi >= 0)
			{
				free(grid[majekodunmi]);
				majekodunmi--;
			}
			free(grid);
			return (NULL);
		}
		for (olaitan = 0; olaitan < width; olaitan++)
			grid[majekodunmi][olaitan] = 0;
	}
	return (grid);
}
