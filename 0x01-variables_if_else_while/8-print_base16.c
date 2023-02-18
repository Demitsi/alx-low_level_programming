#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: It prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	char alphabet;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	{
		putchar('\n');
	}
	return (0);
}
