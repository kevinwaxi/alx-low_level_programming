#include "main.h"
/**
 * _memcpy- copies memory area
 * @dest:memory to copy to
 * @src:memory to copy from
 * @n:number of bytes
 *
 * Return:memory with copies values
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int x = 0;
        int l = n;

        for (; x < l; x++)
        {
                dest[x] = src[x];
                n--;
        }
        return (dest);
}
