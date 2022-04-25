#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 *
 * Return: Void
 */
void _strcat(char *dest, char *src)
{
int i = 0, j = 0;
int strlen;
while (dest[i] != '\0')
{
*dest[i] = dest[i];
i++; 
}
while (src[j] != '\0')
{
*dest[i] = src[j];
i++;
j++;
}
*dest[i] = '\0';
return (dest);
}
