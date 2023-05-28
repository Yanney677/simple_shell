#include "main.h"
/**
 * _dirch - a function that changes directory
 * @s: the character user input
 * @input: the user input to free
 */
void _dirch(char *s, char *input)
{
	int a;
	char buff[125], *cwd;

	cwd = getcwd(buff, 125);
	if (_strcmp(s, "-") == 0)
		s = getenv("_OLDPWD");
	a = chdir(s);
	if (a != -1)
		free(input);
	else
	{
		perror("chdir");
		free(input);
	}
	setenv("_OLDPWD", cwd, 1);
}
