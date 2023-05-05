#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted number if Success,
 * 0 if one or more chars in the string b is not 0 or 1 or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int dec = 0;
	int c;
	unsigned int len = 0;

	if (!b)
	return (0);

	while (b[len] != '\0')
	len++;

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			dec += k;
		k *= 2;
	}
	return (dec);
}

