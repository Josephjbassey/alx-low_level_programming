#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * followed by a new line
 * @argc : number of command-line arguments
 * @argv : string of argumenst passed to main fcn
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
/* cast argc to void to suppress unused variable warning */
	(void)argc;


	printf("%s\n", argv[0]);

	return (0);
}
