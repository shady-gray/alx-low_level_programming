#include <main.h>

/**
 * is_digit - checks for a digit
 *
 * return: 1 if c is digit else return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
