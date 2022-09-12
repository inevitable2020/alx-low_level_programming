#include <stdio.h>

/**
 * main - prints all possible combinations of two different digits.
 * Return: Always 0
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = 48; dig1 <= 56; dig1++)
	{
		for (dig2 = 49; dig2 <= 57; dig2++)
		{
			if (dig1 > dig2)
			{
				putchar(dig1);
				putchar(dig2);
				if (dig1 != 56 || dig2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	
	}
	putchar('\n');
	return (0);
}
