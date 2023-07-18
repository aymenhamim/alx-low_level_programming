#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 *Return: On success 1.
 *d	  On error, -l is returned, and errno os set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, &));
}
