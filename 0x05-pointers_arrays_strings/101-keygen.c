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
	int numb[100];
	int a, b, total;

	total = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		numb[a] = rand() % 78;
		total += (numb[a] + '0');
		putchar(numb[a] + '0');
		if ((2772 - total) - '0' < 78)
		{
			b = 2772 - total - '0';
			total += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}
