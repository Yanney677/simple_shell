#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdarg.h>
#include <limits.h>
int _printf(const char *format, ...);
int _strcat(char *);
int compare(const char *, ...);
int number(int a);
int bin(unsigned int);
extern char **environ;
char *get_line();
int _strcmp(char *s1, char *s2);
unsigned int _strspn(char *s, char *accept);
void child(char *arg[3], char *);
int _putchar(char);
char *pathCheck(char *arg);
void _envCheck(void);
char **argum(char *res, char *arg[4]);
char *_changer(char *arg);
int _strcmp2(char *s1, char *s2);
#endif
