#include "main.h"
/**
 * print_rev - It is a function that prints a string, in reverse,
 * followed by a new line.
 * @s: Is an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
