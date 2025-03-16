#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - Performs simple operations.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*         Exits with 98 if the argument count is incorrect.
*         Exits with 99 if the operator is invalid.
*         Exits with 100 if there is a division/modulo by 0.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4) /* Validate number of arguments */
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operation = get_op_func(argv[2]); /* Get the appropriate function */
if (operation == NULL) /* Validate the operator */
{
printf("Error\n");
exit(99);
}

result = operation(num1, num2); /* Perform the operation */
printf("%d\n", result);

return (0);
}

