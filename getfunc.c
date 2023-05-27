#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_line - a function that reads a user input
 * Return: the string input
 */
char *get_line()
{
	char *buffer, comp[5] = { '\0' };
	size_t buffsize = 32;
	int check, a;

	check = isatty(0);
	if (check == 1)
		_printf("($) ");
	buffer = malloc(sizeof(char) * buffsize);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	a = getline(&buffer, &buffsize, stdin);
	if (a == -1)
	{
		free(buffer);
		return (NULL);
	}
	buffer[_strspn(buffer, "\n")] = '\0';
	if (_strcmp(buffer, comp) == 0)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
