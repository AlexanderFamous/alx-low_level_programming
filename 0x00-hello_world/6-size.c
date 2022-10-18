#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longType;
long long int longLType;
float floatType;

printf("Size of char: %lu byte(s)\n", sizeof(charType));
printf("Size of int: %lu byte(s)\n", sizeof(intType));
printf("Size of long int: %lu byte(s)\n", sizeof(longType));
printf("Size of long long int: %lu byte(s)\n", sizeof(longLType));
printf("Size of float: %lu byte(s))\n", sizeof(floatType));
return (0);
}	
