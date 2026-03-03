#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[len] != '\0')
		len++;
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
