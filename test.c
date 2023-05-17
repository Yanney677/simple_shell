#include <stdio.h>
#include <unistd.h>
int main()
{
	char *nul[2];
	char *input;
	scanf(&input);
	nul[0] = "/bin/ls";
	nul[1] =  NULL;
	printf("($) ");
	execv(input, nul);
	return (0);
}
