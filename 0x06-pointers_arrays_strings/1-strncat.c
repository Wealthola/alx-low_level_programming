#include "main.h"
/**
 * _strncat - concatenate string with n bytes fron another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to be copied
 * Return: destination string concatenate
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d;

	while (dest[i] != '\0')
		i++;
	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[i] = src[d];
	dest[i] = '\0';
	return (dest);
}
