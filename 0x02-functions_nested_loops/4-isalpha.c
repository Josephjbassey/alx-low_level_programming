#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry Point
 *
 * @c: receive input from stdin
 *
 * Return: (1) (Success), (0) (Failure)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
