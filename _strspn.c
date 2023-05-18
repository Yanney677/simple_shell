#include "main.h"
/**
 * _strspn - a function that chaecks for a char from accept
 * @s: check string
 * @accept: string to be checked
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; accept[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] != s[j])
				k++;
			else
				break;
		}
	}
	return (k);
}
