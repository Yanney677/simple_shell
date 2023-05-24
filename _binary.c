#include "main.h"
/**
 * bin - a function that prints in binary
 * @a: the integer to be printed
 * Return: the integers printed
 */
int bin(unsigned int a)
{
	int i, d = 0;

	if (a == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 31; i >= 0; i--)
	{
		if ((a >> i) & 1)
		{
			_putchar('1');
			d++;
		}
		else if (d > 0 || i == 0)
		{
			_putchar('0');
			d++;
		}
	}
	return (d);
}
