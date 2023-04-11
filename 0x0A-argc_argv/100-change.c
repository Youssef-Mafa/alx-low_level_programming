#include <stdio.h>
#include <stdlib.h>

/**
 * main - function  the minimum number of coins
 * to make change.
 * @argc:count arg in cmd line
 * @argv:array pointer to arg
 * Return:0 if no number passed
 *  1 if arg is not digit
 */
int main(int argc, char *argv[])
{
	int chkafi, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	chkafi = atoi(argv[1]);
	if (chkafi < 0)
	{
		printf("0\n");
		return (0);
	}
	while (chkafi != 0)
	{
		change++;
		if ((chkafi - 25) >= 0)
		{
			chkafi -= 25;
			continue;
		}
		if ((chkafi - 10) >= 0)
		{
			chkafi -= 10;
			continue;
		}
		if ((chkafi - 5) >= 0)
		{
			chkafi -= 5;
			continue;
		}
		if ((chkafi - 2) >= 0)
		{
			chkafi -= 2;
			continue;
		}
		chkafi--;
	}
	printf("%d\n", change);
	return (0);
}
