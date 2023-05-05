#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 *
 * Return: x - the amount of flips required.
 * Author: BASIL BASSEY
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = 1, diff;
	unsigned int x = 0, y;

	diff = n ^ m;

	y = 0;
	while (y < (8 * sizeof(unsigned long int)))
	{
	if (res == (diff & res))
		x++;
	res <<= 1;
	y++;
	}
	return (x);
}

