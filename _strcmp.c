#include "main.h"
/**
 * _strcmp - a function to compare two variables
 * @s1: cahracter to be compared
 * @s2: char to be compared
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
