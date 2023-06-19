#include "operations.h"
/**
 * add - divides two numbers and returns results
 * @a: first integer
 * @b: second integer
 *
 * Return: Quotient of @a and @b(on Success)
*/
signed int div(signed int a, signed int b)
{
	if (b != 0)
    		return (a / b);
	else
		return (0);
}
