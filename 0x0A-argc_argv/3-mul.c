#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 1 if Error, 0 if success
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}

	return (0);
}
