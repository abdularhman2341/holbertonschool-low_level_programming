#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
