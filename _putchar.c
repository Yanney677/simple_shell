#include "main.h"
/**
 * _putchar - a function that prints a single character
 * @a: the character to be printed
 * Return: the character
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}

