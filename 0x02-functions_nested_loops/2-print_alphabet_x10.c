#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10x
 *
 * times - variable name for  numuber of iterations
 *
 * c - variable name for alphabet
 */
void print_alphabet_x10(void)
{
	int times;
	char c;

	for (times = 0; times < 10; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
