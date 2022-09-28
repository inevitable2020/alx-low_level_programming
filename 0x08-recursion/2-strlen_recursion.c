/*
 * File: 2-strien_recursion.c
 * Auth: Afolabi Ayotomiwa Matthew
 */

#include "main.h"

/**
 * _strien_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
