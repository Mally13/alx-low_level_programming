#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * main - checks whether a number is positive or negative
 * Return: void
*/
void positive_or_negative(int i)
{
	if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
