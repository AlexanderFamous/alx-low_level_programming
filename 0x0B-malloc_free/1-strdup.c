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
int i, len = 0;
char *dup;

if (str == NULL)
	return (NULL);

/* Tranverse the str arr */
for (i = 0; str[i]; i++)
	len++;
/*Allocates memory for copy */
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);

/*cOPY sTRING from duplicate to index */
for (i = 0; str[i]; i++)
{
dup[i] = str[i];
}
dup[len] = '\0';

return (dup);
}
