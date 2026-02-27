#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int temp;
	int i;

	a = 1;
	b = 2;
	i = 1;
	while (i <= 50)
	{
		if (i == 50)
			printf("%lu\n", a);
		else
			printf("%lu, ", a);
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	return (0);
}
