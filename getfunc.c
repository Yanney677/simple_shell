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

	buffer = malloc(sizeof(char) * buffsize);
	if (buffer == NULL)
		free(buffer);
	getline(&buffer, &buffsize, stdin);
	buffer[_strspn(buffer, "\n")] = '\0';
	if (_strcmp(buffer, comp) == 0)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}
