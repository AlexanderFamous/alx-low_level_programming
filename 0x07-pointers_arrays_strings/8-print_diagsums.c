#include "main.h"

/**
 * print_diagsums- a function that prints the
 * sum of two diagonals of a square matrix of int
 * @a : pointer to 2D array
 * @size: of the 2D array or two diagonal
 *
 * Return : Always 0.
 */

void print_diagsums(int *a, int size)
{
int i;
int primary = 0, secondary = 0;

for (i = 0; i < size; i++)
{

primary = primary + a[i * size + i];

}
for (i = 0; i < size; i++)
{

secondary = secondary + a[i * size + (size - i - 1)];
}


printf("%d, %d\n", primary, secondary);


}
