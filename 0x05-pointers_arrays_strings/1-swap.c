#include "main.h"
/**
 * swap_int - It is a function that swaps the values of two integers
 * @a: It is an inout interger pointer 
 * @b: It is an input interger pointer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
