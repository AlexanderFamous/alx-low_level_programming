#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function
 * @argc : accepts the count of args passed
 * @argv : accepts the stings passed from the compiler
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int total = 0;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
total = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", total);
}
return (0);
}
