#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - Prints an integer.
 * @elem: The integer to print.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - Prints an integer in hexadecimal format.
 * @elem: The integer to print.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - Tests the array_iterator function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    /* Use print_elem to print array elements */
    array_iterator(array, 5, &print_elem);

    /* Use print_elem_hex to print elements in hexadecimal */
    array_iterator(array, 5, &print_elem_hex);

    return (0);
}

