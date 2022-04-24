#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse to stdout
 * @s: string to print
 *
 * Return: Void
 */
void print_rev(char *s)
{
int i, strlen, temp;
strlen = 0;
while (s[strlen] != '\0')
{
strlen += 1;
}
for (i = 0; i < strlen / 2; i++)
{
temp = s[i];
s[i] = s[strlen - i];
s[strlen - i] = temp;
printf("%s\n", s);
}
}
