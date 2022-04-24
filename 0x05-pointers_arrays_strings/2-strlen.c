#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints string length
 * @s: string to print
 *
 * Return: string length
 */
int _strlen(char *s)
{
int l;
l = 0;
while (s[l] != '\0')
{
l += 1;
}
return (l);
}
