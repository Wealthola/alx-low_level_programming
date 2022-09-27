#include "main.h"
/**
 * _memcpy - input
 * @dest: input pointer to string destination
 * @src: input pointer to a source string
 * @n: number of bytes
 * Return: pointer to destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = o;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
