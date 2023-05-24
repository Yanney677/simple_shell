#include "main.h"
/**
 * _strcat - a function that helps print a string
 * @str: the string to be printed
 * Return: the number of printed characters
 */
int _strcat(char *str)
{
	int i = 0, j = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			j += 1;
			i++;
		}
	}
	return (j);
}
