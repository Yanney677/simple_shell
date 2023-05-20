#include "main.h"
/**
 * child - creating the child process using fork
 * @arg: the passed command and arguments
 * @input: the userinput
 */
void child(char *arg[3], char *input)
{
	int fk, result;

	fk = fork();
	if (fk == 0)
	{
		result = execve(arg[0], arg, NULL);
		if (result == -1)
			printf("Error executing command.\n");
		free(input);
	}
	else if (fk > 0)
		wait(NULL);
}
