#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'a program which prints the alphabet in lowercase, followed by a new line'
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* a program that prints the alphabet in lowercase, followed by a new line*/
	char low;
	for (low = 'a'; low <= 'z'; low++)
	{
	       	putchar(low);
	}
	{
	       	putchar('\n');
	}
	return (0);
}
