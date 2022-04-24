#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev - prints string in reverse to stdout
 * @s: string to print
 *
 * Return: Void
 */
void _print_rev(char *s)
{
int i;
int strlen;
strlen = 0;
while (s[strlen] != '\0')
{
strlen += 1;
}
 char y[strlen];
for (i = 0; i < strlen; i++)
{
y[i] = s[strlen - i];
}
printf("%s\n", y);
}
