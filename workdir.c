#include "main.h"
/**
 * _workdir - a function that returns the absolute path of a executable
 * @temp: the user input
 * Return: the absolute path
 */
char *_workdir(char *temp)
{
	char *cwd, *path;

	cwd = getcwd(NULL, 0);
	if (cwd == NULL)
	{
		perror("getcwd");
		free(temp);
		return (NULL);
	}
	path = malloc(sizeof(char) * 32);
	if (path == NULL)
	{
		free(cwd);
		free(temp);
		perror("malloc");
		return (NULL);
	}
	sprintf(path, "%s%s%s", cwd, "/", temp);
	free(cwd);
	return (path);
}
