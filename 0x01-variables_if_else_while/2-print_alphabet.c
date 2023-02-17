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
	char low;

	/* a program that prints the alphabet in lowercase, followed by a new line*/

	for(low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');
	
	return (0);
}
