#include "main.h"
/**
 * _strchr-locates a chracter in a string
 * @s: character to be located
 * @c: input
 *
 * Return:character
 */
char *_strchr(char *s, char c)
{
        int x = 0;

        for (; s[x] >= '\0'; x++)
        {
                if (s[x] == c)
                        return (&s[x]);
        }
        return (0);
}
