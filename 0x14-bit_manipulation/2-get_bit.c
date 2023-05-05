#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: bits
 * @index: bit index
 *
 * Return:  the value of the bit at index index or -1 if an error occurred
 * Author: BASIL BASSEY
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r, d;

	if (index > (8 * sizeof(unsigned long int) - 1))
		return (-1);

	d = 1 << index;
	r = n & d;

	if (r == d)
		return (1);
	return (0);
}

