#include <stdio.h>
#include <math.h>

/**
 * main - Find and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	long int largestPrime = -1;
	long int i = 3;

	while (number % 2 == 0)
	{
		largestPrime = 2;
		number /= 2;
	}

	while (i <= sqrt(number))
	{
		while (number % i == 0)
		{
			largestPrime = i;
			number /= i;
		}
		i +=2;
	}

	if (number > 2)
	{
		largestPrime = number;
	}
	printf("%ld\n", largestPrime);

	return (0);
}

