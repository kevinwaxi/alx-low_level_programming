#include "main.h"

/**
 * main - void print alphabets
 *
 * print_alphabet - check the code for ALX School students.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
