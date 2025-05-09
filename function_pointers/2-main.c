#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - Checks if a number is equal to 98.
 * @elem: The integer to check.
 *
 * Return: 1 if true, 0 if false.
 */
int is_98(int elem)
{
    return (elem == 98);
}

/**
 * is_strictly_positive - Checks if a number is greater than 0.
 * @elem: The integer to check.
 *
 * Return: 1 if true, 0 if false.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * abs_is_98 - Checks if the absolute value of a number is 98.
 * @elem: The integer to check.
 *
 * Return: 1 if true, 0 if false.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || elem == -98);
}

/**
 * main - Tests the int_index function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98,
                     1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index); /* Expected output: 2 */

    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index); /* Expected output: 1 */

    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index); /* Expected output: 2 */

    return (0);
}

