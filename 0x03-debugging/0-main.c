#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Checks if number is positive, zero or negative
 * @a: gives the correct output when given a case of 0.
 *
 * Return: Always (Success)
 */
void positive_or_negative(int a)
{
	int a;

	srand(time(0));

	a = rand() - RAND_MAX / 2;

	if (a > 0)

	{
		printf("%d is positive\n", a);
	}

	else
	{
		printf("%d is negative\n", a);
	}


}
