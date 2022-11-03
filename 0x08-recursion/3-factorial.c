#include "main.h"
/**
 * factorial - finds the factorial of n numbers
 * @n : an integer that stores the value of n
 *
 * Return: The fractorial of n number;
 */

int factorial(int n)
{
int result = n;
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);

result *= factorial(n - 1);

return (result);
}

