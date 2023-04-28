#include <stdio.h>

void first(void);

int main(void)
{
    printf("Main function has started.\n");
    return 0;
}

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
    __attribute__((constructor));

void first(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

