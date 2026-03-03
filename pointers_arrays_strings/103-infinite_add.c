#include "main.h"

/**
 * infinite_add - adds two numbers stored as strings
 * @n1: first number
 * @n2: second number
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to result, or 0 if cant store
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1;
	int len2;
	int carry;
	int sum;
	int i;

	len1 = 0;
	while (n1[len1] != '\0')
		len1++;
	len2 = 0;
	while (n2[len2] != '\0')
		len2++;
	carry = 0;
	len1--;
	len2--;
	i = 0;
	while (len1 >= 0 || len2 >= 0 || carry > 0)
	{
		if (i >= size_r - 1)
			return (0);
		sum = carry;
		if (len1 >= 0)
		{
			sum = sum + (n1[len1] - '0');
			len1--;
		}
		if (len2 >= 0)
		{
			sum = sum + (n2[len2] - '0');
			len2--;
		}
		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		i++;
	}
	r[i] = '\0';
	len1 = 0;
	len2 = i - 1;
	while (len1 < len2)
	{
		carry = r[len1];
		r[len1] = r[len2];
		r[len2] = carry;
		len1++;
		len2--;
	}
	return (r);
}
