#include "main.h"

/**
 * _memset- fills memory with a constant byte
 * @s:starting address
 * @b:value
 * @n:bytes to be changed
 *
 * Return:array with changed values
 */
char *_memset(char *s, char b, unsigned int n)
{
        int x = 0;

        for (; n > 0; x++)
        {
                s[x] = b;
                n--;
        }
        return (s);
}
