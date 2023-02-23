#include "main.h"
/**
 * print_line - It is a function which draws a straight line in the terminal,
 * followed by a new line.
 * @n: It is an input integer
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
