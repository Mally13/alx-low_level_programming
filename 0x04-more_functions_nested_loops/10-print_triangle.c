#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j == size)
					_putchar('#');
				else if (i == size)
					_putchar('#');
				else if (j > size - i)
					_putchar('#');
				else
					_putchar(' ');
			}
			if (i != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
