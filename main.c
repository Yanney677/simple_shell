#include "main.h"
/**
 * main - the main function
 * Return: 0 on success
 */
int main() 
{
	char *input;
	int result;
	while (1)
	{
		printf("($) ");
		input = get_line();
		if (_strcmp(input, "exit") == 0) 
		{
			free(input);
			break;
		}
		result = system(input);
		if (result == -1) 
			printf("Error executing command.\n");
		free(input);
	}
	return 0;
}
