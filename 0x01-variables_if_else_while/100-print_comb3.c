#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	int m, n;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			if (m < n)
			{
				putchar((char)m);
					putchar((char)n);
				if ((m == 56 && n != 57) || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}

