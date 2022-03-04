#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number arguments
 * @argv: array arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
