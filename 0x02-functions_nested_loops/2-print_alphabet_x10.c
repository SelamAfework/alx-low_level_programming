#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
