#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: where to copy
 * @src: where to copy from
 * Return:string
 */
char *_strcpy(char *dest, char *src)
{
        int r = 0;
        int q = 0;

        while (*(src + r) != '\0')
        {
                r++;
        }
        for (; q < r; q++)
        {
                dest[q] = src[q];
        }
        dest[r] = '\0';
        return (dest);
}
