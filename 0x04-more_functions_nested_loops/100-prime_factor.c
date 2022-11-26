#include "main.h"
#include <math.h>
/**
 * main - A PROGRAM TO FIND THE LARGEST PRIME FACTOR OF A NUMBER
 *
 * Return: Always 0.
 */
int main(void)
{
long int num;
long int div = 2, maxPrime;
num = 612852475143;

while (num != 0)
{
if (num % div != 0)
div = div + 1;
else

{
maxPrime = num;
num = num / div;

if (num == 1)
{
printf("%ld is the largest prime factor ! \n", maxPrime);
break;
}
}
}
return  (0);
}
