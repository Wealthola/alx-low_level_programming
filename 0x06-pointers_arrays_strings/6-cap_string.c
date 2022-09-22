#include "main.h"
/**
 * cap_string - converts sring to be capitalized
 * @s: input string to have all word capitalized
 * Return: string after convertion to capitalize word
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case ' ': case '\n': case '\t': case ',':
			case ';': case '.': case '?': case '"':
			case '(': case ')': case '}': case '}':
				if (s[i + 1] > 96 && s[i + 1] < 123)
					s[i + 1] -= 32;
		}
	}
	return (s);
}
