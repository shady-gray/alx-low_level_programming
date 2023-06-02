#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	int m, n, o;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			for (o = 48; o < 58; o++)
			{
				if (m < n && n < o)
				{
					putchar((char)m);
					putchar((char)n);
					putchar((char)o);
					if (m != 55 || (m == 55 && n != 57) || (m == 55 &
								&n == 57 && o != 58))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}

