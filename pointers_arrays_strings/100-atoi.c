#include "main.h"
/**
* _atoi - Converts a string to an integer.
* @s: The string to convert.
*
* Return: The integer value of the string, or 0 if no valid number exists.
*/
int _atoi(char *s)
{
int sign = 1, result = 0, i = 0;
while (s[i] != '\0') /* Traverse through the string */
{
if (s[i] == '-') /* Handle negative sign */
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9') /* Check for digit */
result = (result * 10) + (s[i] - '0');
else if (result > 0) /* Stop on non-digit after number */
break;
i++;
}
return (result *sign); /* Return the result with the correct sign */
}
