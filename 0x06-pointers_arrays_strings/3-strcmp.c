#include "main.h"
/**
 * _strcmp - Is a function which compares two strings.
 * @s1: Is an input string
 * @s2: Is an input string
 * Return: The difference s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
