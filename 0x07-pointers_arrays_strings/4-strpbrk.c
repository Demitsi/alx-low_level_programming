#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -  Is a function which searches a string for any of a set of bytes.
 * @s: Is an input string
 * @accept: Is an input character with which to locate into string s
 * Return: A pointer to the byte in s which matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
