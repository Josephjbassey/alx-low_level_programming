#include <stdio.h>

/**
 * main - Entry point
 *
 * alpha - a char variable
 *
 * This will print all the alphabet on new lines
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
