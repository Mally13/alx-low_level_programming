#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds positive number
 * @argc: Number of arguments passed
 * @argv: A list of arguments passed
 * Return: 0 if success 1 if failure occurs
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	char *ptr;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		while (*ptr != '\0')
		{
			if (!isdigit(*ptr))
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
