#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
char *get_line();
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
void child(char *arg[3], char *);
#endif
