#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdio.h>

/**
 * main - get the last digit of random number generated
 *
 * Return: 0 (on success)
*/
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	return (0);
}

