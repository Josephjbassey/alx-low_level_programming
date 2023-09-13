#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry Point
 *
 * @c: receive input from stdin
 *
 * Return: (1) (Success), (0) (Failure)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
