#include "main.h"
/**
 * find_strlen - returns length of a string
 * @s: string to be checked
 * Return: length of string
 */

int find_strlen(char *s)
{
	int ln = 0;

	if (*(s + ln))
	{
		ln++;
		ln += find_strlen(s + ln);
	}
	return (ln);
}
/**
 * check_palindrome - check if a string is a palindrome
 * @s: pointer to string to be checkes
 * @ln: length of s
 * @i: index of string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int check_palindrome(char *s, int ln, int i)
{
	if (s[i] == s[ln / 2])
		return (1);
	if (s[i] == s[ln - i - 1])
		return (check_palindrome(s, ln, i + 1));
	return (0);
}

/**
 * is_palindrome -returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int ln = find_strlen(s);

	if (*s == '\0')
		return (1);
	return (check_palindrome(s, ln, i));
}
