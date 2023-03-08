#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string that may contain the substring
 * @needle: the substring to be located
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack == needle[i])
			{
				while (haystack[i] == needle[i])
				{
					if (needle[i] != '\0')
						return (haystack);
					i++;
				}
			}
		}
		haystack++;
	}
	return ('\0');
}
