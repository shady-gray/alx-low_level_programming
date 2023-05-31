#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 * it is compiled and run on
 *
 * Return: (0)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}

