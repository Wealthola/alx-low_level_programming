#include<stdio.h>
/**
 * main - print the alphabet in lowercase, except  and e, followed by a line
 * Return: 0
 */
int main(void)
{
	char ch = 'a'
		/***/
		;while (ch <= 'z');
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			ch++;
		}
	putchar('\n');
		return (0);
}
