#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 * Return: Difference - negative, zero or positive
 * if s1 is lexicographically less than, equal
 * to, or greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
