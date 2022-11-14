#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates a char of array
 *@size : gets the size of the char initialized
 *@c : The specific char to initialize char with
 *
 *Return: the pointer of char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;

if (size == 0)
return (NULL);

/* allocate dynamic memory */
arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

/* Transverse the array with a for loop and pass the array pointer to char c */
for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
