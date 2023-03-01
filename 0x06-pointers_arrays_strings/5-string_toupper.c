#include "main.h"
/**
 * string_toupper - Is a function that changes all lowercase letters of a
 * string to upper case.
 * @s: Is an input string
 * Return: char pointer to a converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
