#include <stdio.h>

/**
 * main - Entry point
 *
 * Print all single digit numbers of base 10 starting 0
 *
 * num - variable name
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}

