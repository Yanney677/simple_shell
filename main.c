#include "main.h"
/**
 * main - the main function
 * Return: 0 on success
 */
int main(void)
{
	int fk, i;
	char *input, *arg[3];
	int result;

	while (1)
	{
		printf("($) ");
		input = get_line();
		arg[0] = input;
		arg[1] = NULL;
		if (_strcmp(input, "exit") == 0)
		{
			free(input);
			exit(0);
		}
		fk = fork();
		if (fk == 0)
		{
			result = execve(arg[0], arg, NULL);
			if (result == -1)
				printf("No such file or directory\n");
			free(input);
		}
		else if (fk > 0)
			wait(NULL);
	}
	return (0);
}
