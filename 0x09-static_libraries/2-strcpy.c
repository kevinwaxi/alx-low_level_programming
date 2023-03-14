#include "main.h"
/**
 *_strncpy- copies a string
 *@dest:where copies to
 *@src:where copied from
 *@n:string length
 *Return:string
 */
char *_strncpy(char *dest, char *src, int n)
{
        char *result = dest;

        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        while (n > 0)
        {
                *dest = '\0';
                dest++;
                n--;
        }
        return (result);
}
