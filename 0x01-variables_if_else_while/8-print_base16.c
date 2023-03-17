#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	/* your code goes there */
	int ch = 0;

	char CH = 'a';

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}
	for (CH = 'a'; CH <= 'f'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
