#include <stdlib>
/**
 * main - a program that multiplies two positive numbers
 * @argc: Number of arguments passed
 * @argv: An array og pointers to the arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char *product;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1] < 0 || argv[1] > 9)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] < 0 || argv[2] > 9)
	{
		printf("Error\n");
		exit(98);
	}


}
