#include <stdio.h>
#include "3-function_like_macro.h"
/**
 * 2-main - a function that prints the name of the file it was
 * compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
/* printf(__FILE__"\n"); */

int i;
int j;

i = ABS(-98) * 10;
j = ABS(98) * 10;
printf("%d, %d\n", i, j);

return (0);
}
