#include "main.h"
#include <stdlib.h>
/**
 *_strdup - A Function that returns a pointer to a newly allocated space
 * in memory, that contains a str copy
 *@str : a pointer that saves the string
 *
 * Return: the char pointer
 */

char *_strdup(char *str)
{
int str_size;
static char *dup;
char *dup_offset;

if (str == NULL)
	return (NULL);

/*Allocates memory for copy */
str_size = _strlen(str);
dup = (char *)malloc(sizeof(char) * str_size + 1);
if (dup == NULL)
return ((char *)NULL);

/*cOPY sTRING */
dup_offset = dup;
while (*str)
{
*dup_offset = *str;
dup_offset++;
str++;
}
*dup_offset = '\0';

return (dup);
}
