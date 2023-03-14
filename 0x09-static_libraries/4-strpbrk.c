#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character checked
 * Return: 1 if a letter,lowercase,uppercase and 0 otherwise
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 92))
        {
                return (1);
        }
        else
        {
                return (0);
        }

}
