#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main -Determine if a random number is positive, negative or zero.
 *
 *Return : Always 0.
 */

int main(void)
{
	 	int n;

 		srand(time(0));
		n = rand() - RAND_MAX / 2;
	  if (n > 0)
	  {
			print("%d is positive\n", n);
    }
    if (n == 0)
		{
			print("%d is zero\n", n);
    if (n < 0)
    {
			print("%d is negative\n", n);
    }
    return (0);
}

