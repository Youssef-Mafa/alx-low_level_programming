#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function  that adds positive numbers.
 * @argc:count arg in cmd line
 * @argv:array pointer to arg
 * Return:0 if no number passed
 *  1 if arg is not digit
 */
int main(int argc, char *argv[])
{
	int x, y, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
		while (argv[x][y])
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);

			}
			y++;
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);

	return (0);
}
