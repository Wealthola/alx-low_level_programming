#include "main.h"

/**
 * _strlen - lenght of string
 * @s - an input string
 * Return: nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
