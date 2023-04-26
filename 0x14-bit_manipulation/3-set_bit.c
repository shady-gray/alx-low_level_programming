#include "main.h"
/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: pointer to num of
 * @index: bit index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 * Author: BASIL BASSEY
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > 8 * sizeof(unsigned long int) - 1)
		return (-1);

	j = 1 << index;
	*n = *n | j;
	return (1);
}

