#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a_hi, a_lo, b_hi, b_lo;
	unsigned long int t_hi, t_lo;
	int i;

	a_hi = 0;
	a_lo = 1;
	b_hi = 0;
	b_lo = 2;
	i = 1;
	while (i <= 98)
	{
		if (a_hi > 0)
			printf("%lu%018lu", a_hi, a_lo);
		else
			printf("%lu", a_lo);
		if (i < 98)
			printf(", ");
		else
			printf("\n");
		t_lo = a_lo + b_lo;
		t_hi = a_hi + b_hi;
		if (t_lo >= 1000000000000000000)
		{
			t_hi++;
			t_lo -= 1000000000000000000;
		}
		a_hi = b_hi;
		a_lo = b_lo;
		b_hi = t_hi;
		b_lo = t_lo;
		i++;
	}
	return (0);
}
