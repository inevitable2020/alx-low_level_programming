#include <main.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char c;
	c = 'C';
	printf("Return value when uppercase character %c is passed to isupper(): %d", c, isupper(c));
	c = '+';
	printf("\nReturn value when another character %c is passed to is isupper(): %d", c, isupper(c));
	return 0;
}
