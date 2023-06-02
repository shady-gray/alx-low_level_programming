#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar((char)n);
		if (n != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar(10);
	return (0);
}

