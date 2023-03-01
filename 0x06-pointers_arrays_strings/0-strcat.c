#include "main.h"
/**
 * _strcat - Is a function which concatenates two strings.
 * @dest: Is a input string
 * @src: Is a input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
