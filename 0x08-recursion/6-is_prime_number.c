#include "main.h"
/**
 * is_prime_number - returns a prime numvber
 * @n: func para
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	return (n % 2 == 1);
}
