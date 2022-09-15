#include "main.h"
/**
 * _isdigit - checks whether digit or not
 * @c: argument
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
