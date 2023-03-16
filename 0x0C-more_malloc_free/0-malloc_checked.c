#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Is a function which allocates memory using malloc.
 * @b: Is an unsigned input integer
 * Return: Apointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
