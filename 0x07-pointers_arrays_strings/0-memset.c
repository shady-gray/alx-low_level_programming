#include "main.h"

/**
 * _memcpy - the _memcpy() function copies n bytes from memory area src
 * to memory area dest and it returns a pointer to dest.
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes being copied
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
