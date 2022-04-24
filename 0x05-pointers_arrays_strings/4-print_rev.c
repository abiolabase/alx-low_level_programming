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
int i, strlen, temp;
strlen = 0;
while (s[strlen] != '\0')
{
strlen += 1;
}
for (i = 0; i < strlen / 2; i++)
{
temp = s[i];
s[i] = s[strlen - i - 1];
s[strlen - i - 1] = temp;
printf("%s\n", s);
}
}
