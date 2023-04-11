#include <stdio.h>

/**
 * main - function prints number of arguments passed into it
 * @argc:number argument passed in line command
 * @argv:unused arg
 * Return:0 and exit
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
