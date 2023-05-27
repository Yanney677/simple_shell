#include "main.h"
/**
 * _envCheck - a function that prints the environments
 * Return: NULL
 */
void _envCheck(char *input)
{
	int i = 0;

	while (environ[i])
		_printf("%s\n", environ[i++]);
	free(input);
}
