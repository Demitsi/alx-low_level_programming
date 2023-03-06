#include "main.h"
/**
 * _memset - Is a function which fills memory with constant bytes
 * @s: Is a location to fill
 * @b: Is the char to fill location with
 * @n: Is the number of bytes to fill
 * Return: returns pointer to location filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
