#include "main.h"
/**
* _puts_recursion - Prints a string, followed by a new line.
* @s: The string to print.
*
* Return: Nothing.
*/
void _puts_recursion(char *s)
{
if (*s == '\0') /* Base case: end of string */
{
_putchar('\n'); /* Print a new line */
return;
}
_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursive call for the rest of the string */
}
