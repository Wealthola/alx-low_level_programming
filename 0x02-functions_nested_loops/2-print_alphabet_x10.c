#include"main.h"
/**
 * main - function to print alphabet x10
 * Return: 0
 */
int main(void)
{
	char c, i;
	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
