#include "main.h"
/**
 * main - the main function
 * Return: 0 on success
 */
int main(void)
{
	int check = isatty(0);
	char *input, *arg[4], *res = NULL, **s, *s2;

	while (1)
	{
		input = get_line();
		if (input == NULL && check != -1)
			break;
		if (input == NULL)
			continue;
		if (_strcmp(input, "exit") == 0)
		{
			free(input);
			return (0);
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
		s2 = pathCheck(s[0]);
		if (s2 != NULL)
		{
			s[0] = s2;
			child(s, input);
		}
		else
			_printf("%s: command not found\n", input);
		free(input);
		free(s2);
	}
	return (0);
}
