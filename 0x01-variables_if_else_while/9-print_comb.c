#include <stdio.h>

/**
 * main - Print all possible combination of single-digit numbers
 *
 * digit - Variable name
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');

		if (digit < 9)
		{
			putchar(',');
			putchar(' ');
		} digit++;
	}
	putchar('\n');

	return (0);
}
