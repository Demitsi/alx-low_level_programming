#include "main.h"
#include <unistd.h>
/**
 * _putchar - It writes the character c to stdout
 * @c : It informs the character to print
 *
 * Return: On 1 (success)
 * On an error, -1 returned, an errno is set appropriatly
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
