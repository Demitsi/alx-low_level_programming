#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writesthe character c to stdout
 * @c : It informs the character to print
 *
 * Returns: On 1 (success)
 * On an error, -1 returned, an errno is set appropriatly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
