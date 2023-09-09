#include <stdio.h>

/**
 * main - Entry point
 *
 * revABC - variable name
 *
 * Print alphabet in reverse
 *
 * Return: Always (0) for (Success)
 */
int main(void)
{
	int revABC;

	for  (revABC = 'z'; revABC >= 'a'; revABC--)
	{
		putchar(revABC);
	}
	putchar('\n');

	return (0);
}
