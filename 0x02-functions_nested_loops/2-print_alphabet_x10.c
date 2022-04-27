#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet to display
 *
 * Return: void
 */
void print_alphabet(void)
{
int i;
char a = 'a';
for (i = 0; i < 10; i++)
{
while (a > 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
