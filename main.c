#include "main.h"
/**
 * main - the main function
 * Return: 0 on success
 */
int main(void)
{
	int i, j;
	char *input, *arg[3], *res = NULL, print[4] = "($) ";

	while (1)
	{
		i = 0;
		for (j = 0; j < 4; j++)
			_putchar(print[j]);
		input = get_line();
		if (input == NULL)
			continue;
		res = strtok(input, " ");
		if (res == NULL)
		{
			arg[0] = input;
			arg[1] = NULL;
		}
		else
		{
			while (res != NULL && i < 2)
			{
				arg[i] = res;
				i++;
				res = strtok(NULL, " ");
			}
			arg[i] = NULL;
		}
		if (_strcmp(input, "exit") == 0)
		{
			free(input);
			exit(0);
		}
		child(arg, input);
	}
	return (0);
}
