#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

