#include "main.h"

/**
 * _memset - the _memset() function fills the first n bytes of
 * the memory area pointed to by s with the constant byte b,
 * it returns a pointer to the memory area s.
 *
 * @s: pointer whose bytes are to be replaced
 * @b: the parameter being used to replaace
 * @n: memory area to be filled
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}
	return (s);
}
