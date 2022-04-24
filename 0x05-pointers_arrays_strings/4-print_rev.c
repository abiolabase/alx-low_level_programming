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
char y[strlen(s)];
int i;
for (i = 0; i < strlen(s); i++)
{
y[i] = s[strlen(s) - i];
}
printf("%s\n", y);
}
