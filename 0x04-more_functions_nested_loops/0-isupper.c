#include "main.h"

/**
 * _isupper - show a function that prints 1 when the character is in uppercase.
 * @c: variable being used
 * Return: 0
 *
 */
int _isupper(int c)
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
