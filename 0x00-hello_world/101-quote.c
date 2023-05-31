#include <stdio.h>
/**
 * main - prints a defined string to stdout
 *
 * Return: 1 (Success)
*/
int main(void)
{
	const char *str;
	int i;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	for (i = 0; str[i] != '\0'; i++)
		putchar((int)str[i]);
	putchar(10);
	return (1);
}

