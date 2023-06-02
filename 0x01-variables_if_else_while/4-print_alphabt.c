#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, skipping letters q and e,
 * followed by a new line.
 *
 * Return: 0 (on success)
*/
int main(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		if (c == 101 || c == 113)
			continue;
		putchar(c);
	}
	putchar(10);
	return (0);
}

