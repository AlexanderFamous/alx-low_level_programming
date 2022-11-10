#include <stdio.h>

/**
 * main - Main Functio
 * @argc : Counts the number of arg
 * @argv : contains the arg passed to the function
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i;
if (argc > 1)
{
for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
