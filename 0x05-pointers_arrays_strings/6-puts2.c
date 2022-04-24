#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints string to stdout
 * @s: string to print
 *
 * Return: Void
 */
void puts2(char *s)
{
int i, l;
l = 0;
while (s[l] != '\0')
{
l++;
}
for (i = 0; i < l && s[i] != '\0' && i % 2 == 0; i++)
{
printf("%d", s[i]);
}
printf("\n"); 
}
