#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
	}
}
