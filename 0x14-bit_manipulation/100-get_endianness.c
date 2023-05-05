#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

bool is_little_endian(void)
{
    int i = 1;
    char* ptr = (char*)&i;
    return (*ptr);
}
