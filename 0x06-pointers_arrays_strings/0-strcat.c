#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 *
 * Return: dest string
 */
char  *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
char *tmp;
while (dest[i] != '\0')
{
tmp[j] = dest[i];
i++;
j++;
}
i = 0;
while (src[j] != '\0')
{
tmp[j] = src[i];
i++;
j++;
}
tmp[j] = '\0';
*dest = *tmp;
return (dest);
}
