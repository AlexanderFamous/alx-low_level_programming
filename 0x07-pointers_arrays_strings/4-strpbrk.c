#include "main.h"

/**
 *_strpbrk- a function that searches  a string for any set of bytes
 *@s : string where the byte will be found
 *@accept : string containing char to be found
 *
 * Return: the pointer
 */

char *_strpbrk(char *s, char *accept)
{

int i, j;

for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{

return (&s[i]);

}
}
}
return (NULL);
}
