#include <stdio.h>
#include <stdlib.h>

/**
 * main - function multiple two num
 * @argc:count number of arg in line cmd
 * @argv:array of pointer to arg
 * Return:1 if arg < 1
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	return (0);
}
