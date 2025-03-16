#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Prints a name as is.
 * @name: The name of the person.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: The name of the person.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] - ('a' - 'A')); /* Convert to uppercase */
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
    putchar('\n');
}

/**
 * main - Tests the print_name function.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    return (0);
}

