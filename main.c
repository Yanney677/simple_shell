#include "main.h"
/**
 * main - the main function
 * Return: 0 on success
 */
int main(void)
{
	int check = 0, a;
	char *input, *arg[4], *res = NULL, **s;

	check = isatty(0);
	while (1)
	{
		if (check == 1)
			_printf("($) ");
		input = get_line();
		if (input == NULL)
			continue;
		if (_strcmp(input, "exit") == 0)
		{
			free(input);
			free(res);
			exit(0);
		}
		if (_strcmp(input, "env") == 0)
		{
			_envCheck();
			continue;
		}
		res = strtok(input, " ");
		if (res == NULL)
		{
			s[0] = input;
			s[1] = NULL;
		}
		else
			s = argum(res, arg);
		a = pathCheck(s[0]);
		if (a > 0)
			child(s, input);
		else
			_printf("%s: command not found\n", input);
		if (check != 1)
			break;
	}
	return (0);
}
