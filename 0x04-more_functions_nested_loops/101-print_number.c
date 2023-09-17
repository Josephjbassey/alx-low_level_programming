#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
