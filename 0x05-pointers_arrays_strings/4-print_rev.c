#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: String to print
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
