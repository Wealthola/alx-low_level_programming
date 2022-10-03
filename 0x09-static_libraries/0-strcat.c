#include "main.h"
/**
 * _strcat - concatenates string from another string
 * @dest: destination string
 * @src: source string
 * Return: destinationt string concatenate
 */
char *_strcat(char *dest, char *src)
{
	int i = j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
