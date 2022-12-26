#include "main.h"

/**
 *_strstr- a function that locates a substring
 *@haystack : main string to be examined
 *@needle : substring to be searched for in s1 string
 *
 * Return: the pointer
 */

char *_strstr(char *haystack, char *needle)
{

int i, j;

for (i = 0; haystack[i] != '\0' ; i++)
{

if (haystack[i] == needle[0])
{
for (j = 1; needle[j] != '\0'; j++)
{
if (haystack[i + j] !=  needle[j])
{

break;
}



}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
}

}
return (NULL);
}
