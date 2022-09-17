#include "main.h"

/**
 * print_alphabet_x10  - function to print abc ten times
 * You can use only put char
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);
		}
	_putchar('\n');
	}
}
