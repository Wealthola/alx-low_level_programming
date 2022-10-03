#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: destination of string
 * @s2: source destination to be copied
 * Return: difference of first characters that are of diff value
 */
int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0; s1[d] != '\0' && s2[d] != '\0'; d++)
		if (s1[d] != s2[d])
			return (s1[d] - s2[d]);
	return (0);
}
