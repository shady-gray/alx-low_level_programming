#include "main.h"

/**
 * sqt - returns natural...
 * @m: input
 * @d: itr
 * Return: sqrt
 */
int sqt(int m, int d)
{
	if (d % (m / d) == 0)
	{
		if (d * (m / d) == m)
			return (d);
		else
			return (-1);
	}
	return (0 + sqt(m, d + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: func para
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqt(n, 2));
}
