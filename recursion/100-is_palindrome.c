#include "main.h"

/**
 * _strlen - returns string length
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_pal - checks palindrome recursively
 * @s: string
 * @start: start index
 * @end: end index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_pal(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0)
		return (1);
	return (check_pal(s, 0, len - 1));
}
