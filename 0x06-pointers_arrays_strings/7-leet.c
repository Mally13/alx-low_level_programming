#include "main.h"
#include <string.h>
/**
 * leet -  encodes a string into 1337.
 * @str: pointer to string to be encodes
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[8] = {'O', 'L', '*', 'E', 'A', '*', '*', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == letters[j] ||
					str[i] - 32 == letters[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
