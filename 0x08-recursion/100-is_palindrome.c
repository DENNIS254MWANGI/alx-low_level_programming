#inc0lude "main.h"
#include <stdio.h>

/**
 * leng_recur - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int leng_recur(char *s)
{
	if (*s)
	{
		s++;
		return (1 + leng_recur(s));
	}
	return (0);
}
/**
 * id_palindrome - helper function for is_palindrome
 * @a: the string
 * @b: length of string
 * @c: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int id_palindrome(char *a, int b, int c)
{
	if (c >= b)
		return (1);
	if (a[b] == a[c])
		return (id_palindrome(a, b - 1, c + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int b = leng_recur(s);
	int c = 0;

	return (id_palindrome(s, b - 1, c));
}
