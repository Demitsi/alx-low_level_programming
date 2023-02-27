#include "main.h"
/**
 * _strlen - It is a function that returns the length of a string
 * @s: Is an input string
 *
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
