#include "main.h"
#include <stddef.h> /* For NULL definition */
/**
* _strchr - Locates a character in a string.
* @s: The string to search.
* @c: The character to locate.
*
* Return: Pointer to the first occurrence of the character `c`
*         in the string `s`, or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0') /* Check if c is the null terminator */
{
return (s);
}
return (NULL);
}
