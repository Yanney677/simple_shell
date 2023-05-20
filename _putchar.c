#include "main.h"
#include <unistd.h>
/**
 * _putchar - function to print a character
 * Return: 0 (Success)
 * @a: character attribute
 * On error return: -1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
