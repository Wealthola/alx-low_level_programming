#include "main.h"
/**
 * _strncpy - copies string from source to destination
 * @dest: destination string
 * @src: source stringto be copied
 * @n: bytes to be copied from source string
 * Return: destination string concatenate
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && src[d] != '\0';  d++)
		dest[d] = src[d];
	for (; d < n; d++)
		dest[d] = '\0';
	return (dest);
}
