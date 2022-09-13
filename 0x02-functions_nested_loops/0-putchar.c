#include "main.h"
/**
 * main - print -putchar ollowed by a new line
 * Return: 0
 */
int main(void)
{
	char yes[] = "_putchar";
	int d = 0;
	
	while (d < (int)sizeof(yes) - 1)
	{
		_putchar(yes[d]);
		d++
	}
	_putchar('\n');
	return (0);
}
