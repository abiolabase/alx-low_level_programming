#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints string in reverse to stdout
 * @s: string to print
 *
 * Return: Void
 */
void rev_string(char *s)
{
int i;
int strlen;
char *e, *b, v;
strlen = 0;
e = s;
b = s;
while (s[strlen] != '\0')
{
strlen += 1;
e++;
}
for (i = 0; i < strlen/2; i++)
{
v = *b;
*b = *(e - 1);
*(e - 1) = v;
b++;
e--;
}
printf("%s\n", s);
}
