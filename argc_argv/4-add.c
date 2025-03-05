#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* is_digit_string - Checks if a string contains only digit characters.
* @s: The string to check.
*
* Return: 1 if the string contains only digits, 0 otherwise.
*/
int is_digit_string(char *s)
{
int i = 0;
while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
}
return (1);
}
/**
* main - Adds positive numbers passed as command-line arguments.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
*
* Return: 0 if successful, 1 if any argument contains non-digit symbols.
*/
int main(int argc, char *argv[])
{
int sum = 0, i;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_digit_string(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
