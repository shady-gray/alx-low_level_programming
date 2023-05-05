#include "main.h"
/**
 * _calcpower - A function to calculate power and base
 * @b: base
 * @p: power
 *
 * Return: value of product of power and base
 * Author: BASIL BASSEY
*/
long int _calcpower(unsigned int p, unsigned int b)
{
	unsigned int j;
	unsigned long int num;

	num = 1;
	j = 1;
	while (j <= p)
	{
		num *= b;
		j++;
	}
	return (num);
}

/**
 * print_binary - prints binary representation of a number
 * @n: decimal to be converted
 *
 * Return: void
 * AUTHOR: BASIL BASSEY
 */
void print_binary(unsigned long int n)
{
	char flg;
	unsigned long int rslt, dev;

	flg = 0;
	dev = _calcpower(8 * sizeof(unsigned long int) - 1, 2);
	while (dev != 0)
	{
		rslt = n & dev;
		if (rslt == dev)
		{
			flg = 1;
			_putchar('1');
		}
		else if (dev == 1 || flg == 1)
			_putchar('0');
		dev >>= 1;
	}
}

