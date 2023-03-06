#include "main.h"
/**
 * _memcpy - Is a function which copies memory area
 * @dest: Is a memory area destination to copy
 * @src: Is a memory area source to copy from
 * @n: Is the number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
