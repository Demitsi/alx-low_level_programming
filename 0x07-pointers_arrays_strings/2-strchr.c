#include "main.h"
#include <stdio.h>
/**
 * _strchr - Is a function which locates a character in a string.
 * @s: Is an input string to search in
 * @c: Is an input character to locate into string s
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
