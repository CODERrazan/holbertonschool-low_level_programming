#include "main.h"
#include <stdio.h>
/**
* print_array - Print an array of integers.
* @a: An array of integers.
* @n: The number of elements to swap.
*
* Return: Nothing.
*/
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
print_array(a, sizeof(a) / sizeof(int));
reverse_array(a, sizeof(a) / sizeof(int));
print_array(a, sizeof(a) / sizeof(int));
return (0);
}
