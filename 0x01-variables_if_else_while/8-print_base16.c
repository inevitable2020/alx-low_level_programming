#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowerase.
 * Return: Always 0.
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
