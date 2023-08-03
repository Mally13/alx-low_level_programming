#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 (big endian) 1 (little endian)
 */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	return (*endian);
}
