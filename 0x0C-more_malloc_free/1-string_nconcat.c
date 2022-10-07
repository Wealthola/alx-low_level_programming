#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *wealth_ola;
	unsigned int i = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[lens1])
		lens1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[lens2])
		lens2++;
	if (n >= lens2)
		n = lens2;
	wealth_ola = malloc(lens1 + n + 1);
	if (wealth_ola == NULL)
		return (NULL);
	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			wealth_ola[i] = *s1, s1++;
		else
			wealth_ola[i] = *s2, s2++;
	}
	wealth_ola[i] = '\0';
	return (wealth_ola);
}
