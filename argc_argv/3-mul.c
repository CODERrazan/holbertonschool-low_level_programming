#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two numbers passed as command-line arguments.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
*
* Return: 0 if successful, 1 if there are not exactly two arguments.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]); /* Convert first argument to integer */
num2 = atoi(argv[2]); /* Convert second argument to integer */
result = num1 *num2;
printf("%d\n", result); /* Print the result */
return (0);
}
