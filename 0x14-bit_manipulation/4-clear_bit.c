#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to bit
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * Author: BASIL BASSEY
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > 8 * sizeof(unsigned long int) - 1)
	return (-1);

	j = ~(1 << index);
	*n = *n & j;
	return (1);
}

