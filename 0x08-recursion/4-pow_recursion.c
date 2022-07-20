#include "main.h"

/**
 * _pow_recursion - returns a power value
 * @x: func para
 * @y: second func para
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
