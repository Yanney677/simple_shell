#include "main.h"
/**
 * argum - a function to split user input to arguments
 * @res: the split buffer
 * @arg: the arguments array
 * Return: returns the splitted arguments
 */
char **argum(char *res, char *arg[4])
{
	int i = 0;

	while (res != NULL && i < 3)
	{
		arg[i] = res;
		i++;
		res = strtok(NULL, " ");
	}
	arg[i] = NULL;
	free(res);
	return (arg);
}
