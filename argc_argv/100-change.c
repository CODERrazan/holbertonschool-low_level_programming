#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the minimum number of coins to make change.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int cents, coins = 0;
int denominations[] = {25, 10, 5, 2, 1}; /* Coin values */
int i;
/* Check for exactly 1 argument (not including program name) */
if (argc != 2)
{
printf("Error\n");
return (1);
}
/* Convert argument to an integer */
cents = atoi(argv[1]);
/* If cents is negative, print 0 and exit */
if (cents < 0)
{
printf("0\n");
return (0);
}
/* Calculate the minimum number of coins */
for (i = 0; i < 5; i++) /* Iterate through coin values */
{
while (cents >= denominations[i])
{
cents -= denominations[i];
coins++;
}
}
/* Print the result */
printf("%d\n", coins);
return (0);
}
