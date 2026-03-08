#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: accepted characters
 *
 * Return: number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int found;

	i = 0;
	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 0)
			return (i);
		i++;
	}
	return (i);
}
