#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print any given number whether positive or negative
 *
 * Return: 0(success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Assign a random n to the variable n each time the function is executed */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
}
	return (0);
}
