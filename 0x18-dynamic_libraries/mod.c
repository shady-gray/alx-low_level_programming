#include "operations.h"
/**
 * mod - adds two numbers and returns results
 * @a: first integer
 * @b: second integer
 *
 * Return: modulo of @a and @b(on Success)
*/
signed int mod(signed int a, signed int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}