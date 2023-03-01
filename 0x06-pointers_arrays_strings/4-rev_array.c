#include "main.h"
/**
 * reverse_array - Is a function which reverses an array.
 * @a: Is an input array
 * @n: Is a number of elements of an array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
