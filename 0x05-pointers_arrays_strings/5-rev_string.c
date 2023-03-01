#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string -  a function that reverses a string
 * @s:a pointer to char
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char rev = s[0];
	
	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{	
		i--;
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
	}
}
