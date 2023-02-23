#include "main.h"
/**
 * largest_number -  Itreturns the largest of 3 numbers
 * @a: Its first integer
 * @b: Its second integer
 * @c: Its third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (c >= a && c >= b)
	{
		largest = c;
	}

	return (largest);
}
