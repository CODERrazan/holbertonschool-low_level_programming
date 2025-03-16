#include <unistd.h>

/**
 * _putchar - Writes a character to standard output.
 * @c: The character to write.
 *
 * Return: 1 on success.
 *         -1 on error, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

