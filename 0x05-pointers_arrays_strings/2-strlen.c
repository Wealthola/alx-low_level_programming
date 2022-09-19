#include "main.h"

/**
 * _strlen - lenght of string
 * @s - an input string
 * Return: return lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
