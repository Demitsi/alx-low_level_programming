#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: It prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d <= 10; d++)
	{
		putchar(d +'0');
	}
	{
		putchar('\n');
	}
	return (0);
}
