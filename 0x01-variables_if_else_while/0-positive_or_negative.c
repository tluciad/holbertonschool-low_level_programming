#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int main;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positiven\n");
	}
	if (n = 0)
	{
		printf("%d is zero\n");
	}
	if (n < 0)
	{
		printf("%d is negative\n");
	}
	return (0);
}
