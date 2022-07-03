#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * program to select random number
 *
 * check if the number is positive or negative or zero
 *
 * end program if return value is (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is Positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
