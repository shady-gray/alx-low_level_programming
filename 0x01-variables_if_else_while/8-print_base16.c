#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	char c;

	for (c = 48; c < 58; c++)
		putchar(c);
	for (c = 97; c < 103; c++)
		putchar(c);
	putchar(10);
	return (0);
}

