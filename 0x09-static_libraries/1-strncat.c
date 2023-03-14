#include "main.h"
/**
 * _strncat- concatenates strings
 * @dest: concatenated to
 * @src: string concatenated
 * @n: bytes to be used
 * Return: concatenated string without null termination
 */
char *_strncat(char *dest, char *src, int n)
{
        char *result = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while (*src != '\0' && n > 0)
        {
                *dest = *src;
                dest++;
                src++;
                n--;
        }
        *dest = '\0';
        return (result);
}
