#include "main.h"

/**
* print_alphabet_x10 -> prints the lowercase alphabets x10
*/

void print_alphabet_x10(void)
{
	int j, i;
	i = 0;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	i++;
	}
}
