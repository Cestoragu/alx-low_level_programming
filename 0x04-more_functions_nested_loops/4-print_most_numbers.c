#include "main.h"

/**
 * print_most_numbers - print the from 0 to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int a = 9;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
