#include "main.h"
/**
 * number - a function that prints a number character
 * @a: the number to be printed
 * Return: the characters printed
 */
int number(int a)
{
	char s2;
	char *s;
	int j, f, i = 0, ge = 0;

	if (a == INT_MIN)
	{
		s = "-2147483648";
		for (f = 0; s[f] != '\0'; f++)
		{
			_putchar(s[f]);
		}
		return (f);
	}
	if (a < 0)
	{
		_putchar('-');
		a = -a;
		ge++;
	}
	s = malloc(sizeof(a));
	do {
		s[i++] = a % 10 + '0';
		a /= 10;
	} while (a > 0);
	s[i] = '\0';
	for (j = 0; j < i / 2; j++)
	{
		s2 =  s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = s2;
	}
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		_putchar(s[j++]);
		ge++;
	}
	free(s);
	return (ge);
}
