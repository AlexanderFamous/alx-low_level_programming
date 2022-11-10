#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Function
 * @argc : contains the count of arg
 * @argv : contains the string of the arg
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int num, digit, sum = 0;
for (num = 1 ; num < argc ; num++)
{
for (digit = 0 ; argv[num][digit]; digit++)
{

if (argv[num][digit] < '0')
{
printf("0\n");
}
else if (argv[num][digit] > '9')
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[num]);
}
printf("%d\n", sum);
}
