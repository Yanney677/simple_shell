#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_line - a function that reads a user input
 * Return: the string input
 */
char *get_line()
{
	char *line, *buffer;
	size_t buffsize = 32;

	buffer = malloc(20);
	getline(&buffer, &buffsize, stdin);
   	buffer[_strspn(buffer, "\n")] = '\0';
	return (buffer);
}
