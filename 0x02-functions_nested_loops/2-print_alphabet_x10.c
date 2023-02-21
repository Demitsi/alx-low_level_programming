#include "main.h"
/**
 * print_alphabet_x10 - Check description
 * Description: To print the alphabet 10x in lowercase and adding a line
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
	return (0);
}
