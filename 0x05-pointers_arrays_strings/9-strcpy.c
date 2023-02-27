#include "main.h"
/**
 * _strcpy - It is a function that copies the string pointed by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: Is a pointer to destination of string
 * @src: Is a pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest = *src;
	return (aux);
}
