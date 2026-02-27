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
	unsigned long int sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum = sum + a;
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%lu\n", sum);
	return (0);
}
