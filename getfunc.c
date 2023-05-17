#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_line - a function that reads a user input
 * Return: the string input
 */
char *get_line()
{
	char *line;

	line = malloc(20);
	fgets(line, 20, stdin);
   	line[_strspn(line, "\n")] = '\0';
	return (line);
}
