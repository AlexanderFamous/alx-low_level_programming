#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1 : accepts the first char
 *@s2 : accepts the second char
 *
 * Return: the pointer of char
 */

char *str_concat(char *s1, char *s2)
{

int i = 0, j = 0, len = 0;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";


s3 = malloc(sizeof(char) * (len));
/* insert the first string in the new string allocated dynamically */
while (s1[i] != '\0')
{
s3[j] = s1[i];
i++;
j++;
}
i = 0;
while (s2[i] != '\0')
{
s3[j] = s2[i];
i++;
j++;
}

/* s3[j] = '\0'; */
return (s3);


}
