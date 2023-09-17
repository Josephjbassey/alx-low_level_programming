#include <main.h>

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description: This function takes an integer as input and prints it.
 * If the integer is negative, it prints a '-' sign before the number.
 */
void print_number(int n)
{
	int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
