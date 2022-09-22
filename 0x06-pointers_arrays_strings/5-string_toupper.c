#include "main.h"
/**
 * string_toupper - converts dtring lowercase letter to uppercase
 * @s: input string to be converted
 * Return: string after conversion to upper
 */
char *string_toupper(char *s)
{
	int d;

	for (d = 0; s[d] != '\0'; d++)
		if (s[d] > 96 && s[d] < 123)
			s[d] -= 32;
	return (s);
}
