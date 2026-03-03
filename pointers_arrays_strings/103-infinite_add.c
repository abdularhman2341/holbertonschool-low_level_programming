#include "main.h"

/**
 * _strlen_num - returns length of a string
 * @s: pointer to the string
 *
 * Return: length
 */
int _strlen_num(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

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
	int l1, l2, carry, sum, i, tmp;

	l1 = _strlen_num(n1) - 1;
	l2 = _strlen_num(n2) - 1;
	carry = 0;
	i = 0;
	while (l1 >= 0 || l2 >= 0 || carry > 0)
	{
		if (i >= size_r - 1)
			return (0);
		sum = carry;
		if (l1 >= 0)
			sum += (n1[l1--] - '0');
		if (l2 >= 0)
			sum += (n2[l2--] - '0');
		carry = sum / 10;
		r[i++] = (sum % 10) + '0';
	}
	r[i] = '\0';
	l1 = 0;
	l2 = i - 1;
	while (l1 < l2)
	{
		tmp = r[l1];
		r[l1++] = r[l2];
		r[l2--] = tmp;
	}
	return (r);
}
