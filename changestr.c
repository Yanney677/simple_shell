#include "main.h"
/**
 * _changer - a function that changes a command with a path in it
 * @s: the string command to be changed
 * Return: the changed string
 */
char *_changer(char *s)
{
	char *s2;
	int i, j = 0, k;

	s2 = malloc(sizeof(char) * 64);
	if ((_strcmp2(s, "/bin/") == 0))
	{
		for (i = 4; s[i - 1] != '\0'; i++)
		{
			s2[j] = s[i];
			j++;
		}
	}
	else
	{
		for (k = 0; s[k] != '\0'; k++)
			s2[k] = s[k];
		s2[k] = '\0';
	}
	return (s2);
}
