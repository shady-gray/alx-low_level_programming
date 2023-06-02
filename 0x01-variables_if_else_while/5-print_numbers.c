#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
		putchar(c);
	putchar(10);
	return (0);
}

