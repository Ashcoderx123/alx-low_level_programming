#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int x = 10;
	char c;

	while (x < 10)
	{
		char c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		x++;
	}
}

