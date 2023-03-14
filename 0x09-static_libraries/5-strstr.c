#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack:string to look into
 * @needle: string being located
 *
 * Return:substring
 */
char *_strstr(char *haystack, char *needle)
{
        for (; *haystack != '\0'; haystack++)
        {
                char *h = haystack;
                char *n = needle;

                while (*h == *n && *n != '\0')
                {
                        h++;
                        n++;
                }
                if (*n == '\0')
                        return (haystack);
        }
        return (0);
}
