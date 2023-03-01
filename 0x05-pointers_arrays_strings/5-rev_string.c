#include "main.h"
#include <stdio.h>

/**
 * rev_string -  a function that reverses a string
 * @s:a pointer to char
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		if (*s != '\0')
			putchar(*s);
		s--;
	}
	putchar('\n');
}
