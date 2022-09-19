#include "main.h"

/**
 * _strlen - lenght of string
 * @s - string
 * Return: return lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	ehile (*(s + len) != '\0')
		len++;
	return (len);
}
