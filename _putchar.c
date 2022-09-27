#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: the character to print
 *
 * Return: On successful 1.
 * On error, -1 is returned successful, errno is set appropriately.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
