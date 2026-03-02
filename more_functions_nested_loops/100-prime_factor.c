#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n;
	unsigned long int i;

	n = 612852475143;
	i = 2;
	while (i * i <= n)
	{
		while (n % i == 0)
			n = n / i;
		i++;
	}
	printf("%lu\n", n);
	return (0);
}
