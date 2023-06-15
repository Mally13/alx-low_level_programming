#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings s1 and a number of bytes fron s2
 * @s1: Pointer to string 1
 * @s2: pointer to string 2
 * @n: number of bytes to concatnate from s2
 * Return: pointer to the concatenated string or null if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return NULL;

	len = 0;

	for (i = 0; s1[i]; i++)
		newstr[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
	       newstr[len++] =s2[i];

	newstr[len] = '\0';

	return (newstr);	
}
