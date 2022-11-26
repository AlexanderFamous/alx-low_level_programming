#include "main.h"
#include <math.h>
/**
 * C PROGRAM TO FIND THE PRIME FACTORN OF A NUMBER 
 */
int main(void)
{
long int num;
long int div = 2 , /* ans = 0, */ maxPrime;
/* Initialize the number to find the prime factor */
num = 612852475143;


/* Print the number of 2s that can divide num in a loop */

while (num != 0)
{
if (num % div != 0)
div = div + 1;

	else
	
{
         maxPrime = num;
	num = num / div;

	
if(num == 1)
{
printf("%ld is the largest prime factor ! \n", maxPrime);
/* ans = 1; */
break;
}
}
}
return  (0);
}
