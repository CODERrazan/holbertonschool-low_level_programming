#include <string.h>
#include "main.h"
/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be modified.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0;
int is_separator;
char separators[] = " \t\n,;.!?\"(){}";
while (str[i] != '\0')
{
is_separator = 0;
if (i == 0 || strchr(separators, str[i - 1]) != NULL)
is_separator = 1;
if (is_separator && str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
i++;
}
return (str);
}
