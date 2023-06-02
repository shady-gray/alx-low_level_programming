#include <stdio.h>
/**
 * main - prints the alphabet in lowercase in reverse, followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	char c;

	for (c = 122; c > 96; c--)
		putchar(c);
	putchar(10);
	return (0);
}

