#include "main.h"
/**
 * _strlen - Returns length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s; s++)
		i++;
	return (i);
}
