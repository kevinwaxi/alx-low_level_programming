#include "main.h"

/**
 *print_most_numbers - prints the numbers,
 *	from 0 to 9,followed by a new line.
 *
 *Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char nums;

	for (nums = 0; nums <= 9; ++nums)
	{
		if (nums == 2 || nums == 4)
		_putchar(nums);
	}
	_putchar('\n');
}
