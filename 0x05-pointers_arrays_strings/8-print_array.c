#include "main.h"
#include <stdio.h>
/**
 * print_array -It is a function that prints n elements,
 * of an array of integers, followed by a new line.
 * @a: Is an input array
 * @n: Is an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
