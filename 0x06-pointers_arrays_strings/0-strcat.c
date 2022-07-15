#include "main.h"

/**
 * _strncat -  a function that concatenates a destination string to
 * a source string with n chars.
 * @dest: destination string
 * @src: source string
 * @n: number of source chars to be concatenated
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, index = 0;

	while (dest[index++])
		len1++;

	for (index = 0; src[index] && index < n; index++)
		dest[len1++] = src[index];

	return (dest);
}
