#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string
 *
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	int i;
	int new_word;

	new_word = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		    s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		    s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		    s[i] == '}')
			new_word = 1;
		else if (new_word == 1)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
			new_word = 0;
		}
		i++;
	}
	return (s);
}
