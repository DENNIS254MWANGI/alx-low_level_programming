#include "main.h"
#include <stdio.h>

/**
 * id_str - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @a: left index.
 * @b: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int id_str(char *s1, char *s2, int a, int b)
{
	if (s1[a] == '\0' && s2[b] == '\0')
		return (1);
	if (s1[a] == s2[b])
		return (id_str(s1, s2, a + 1, b + 1));
	if (s1[a] == '\0' && s2[b] == '*')
		return (id_str(s1, s2, a, b + 1));
	if (s2[b] == '*')
		return (id_str(s1, s2, a + 1, b) || id_str(s1, s2, a, b + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (id_str(s1, s2, 0, 0));
}
