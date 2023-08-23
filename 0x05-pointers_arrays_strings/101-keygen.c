#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  program that generates random
 * valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb[50];
	int a, b, total;

	total = 0;

	srand(time(NULL));

	for (a = 0; a < 50; a++)
	{
		numb[a] = rand() % 32;
		total += (numb[a] + '0');
		putchar(numb[a] + '0');
		if ((1000 - total) - '0' < 32)
		{
			b = 1000 - total - '0';
			total += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}
