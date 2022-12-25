#include "main.h"

/**
 * _memset- a function that fills memory with a constant byte
 * @b : The constant byte that fill fill the memory
 * @n : the size of the bytes
 * @s : pointer that will hold the memory byte
 *
 * Return: the pointer that holds the memory byte
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

/* fill "n" elements/block with constant b */
for (i = 0; i < n; i++)
{

s[i] = b;
}

return (s);



}
