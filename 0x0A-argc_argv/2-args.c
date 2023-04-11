#include <stdio.h>
/**
 * main - function print all argument it recives
 * @argc:number arg supplied to line cmd
 * @argv:array of pointer to arg
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
