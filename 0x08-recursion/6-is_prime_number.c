#include "main.h"
#include <stdio.h>

/**
  * id_prime - checks recursively the input from is_prime_number
  * @n: iterator
  * @z: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int id_prime(int n, int z)
{
	if (z % n == 0 || z < 2)
		return (0);
	else if (n == z - 1)
		return (1);
	else if (z > n)
		return (id_prime(n + 1, z));
	return (1);
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
{
	return (id_prime(2, n));
}
