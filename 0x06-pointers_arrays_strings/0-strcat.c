#include "main.h"

/**
 * _strcat - Concatenates teo strings
 * @dest: pointer to the first string
 * @src: pointer to the second string to be appended
 * Return: pointer to the final string after concatenation
 */
char *_strcat(char *dest, char *src)
{
	int lndest = 0 , lnsrc = 0, i;

	while (*dest != '\0')
	{
		lndest++;
		dest++;
	}

	while (*src != '\0')
	{
		lnsrc++;
		src++;
	}

	for (i = 0; i <= lnsrc; i++)
	{
		dest[lndest + i] = src[i];
	}
	dest[lndest + i] = '\0';
	return (dest);

}
