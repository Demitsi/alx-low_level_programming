#include "main.h"
#include <unistd.h>
/**
 * _putchar - It is a function the writes the character c to stdout
 * @c : It informs the character to print
 *
 * Return: On 1 (success)
 * On an error, -1 returned, an errno is set appropriatly
 */
int _putchar(char c)
{
	return (write(1, &x, 1));
}
