#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates valid passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;
	char c;

	srand(time(0));
	sum = 2772;
	while (sum > 0)
	{
		if (sum > 126)
			c = rand() % 95 + 32;
		else
			c = sum;
		sum = sum - c;
		putchar(c);
	}
	return (0);
}
