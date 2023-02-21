#include "main.h"
/**
 * print_alphabet_x10 - Check description
 * Description: The function usese the putchar function to print
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = '0'; j <= '10'; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
		_putchar(j);
		_putchar('\n');
	}
	return (0);
}
