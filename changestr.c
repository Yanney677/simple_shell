#include "main.h"
/**
 * _changer - a function that changes a command with a path in it
 * @s: the string command to be changed
 * Return: the changed string
 */
char *_changer(char *s)
{
	char *s2;
	int i, j = 0;

	s2 = malloc(sizeof(char) * 64);
	for (i = 4; s[i - 1] != '\0'; i++)
	{
		s2[j] = s[i];
		j++;
	}
	return (s2);
}
