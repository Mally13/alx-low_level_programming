#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments passed
 * @argv: A list of arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc && argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
