#include "main.h"

/**
 * _memcpy- a function that copies memory area
 * @dest : pointer that copies n bytes from the target memory area
 * @src : pointer that stores the actual memory byte that is copied
 * @n : size of bytes tro be copied
 *
 * Return: the pointer that holds the memory byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

/* fill "n" elements/block with constant b */
for (i = 0; i < n; i++)
{

dest[i] = src[i];
}

return (dest);



}
