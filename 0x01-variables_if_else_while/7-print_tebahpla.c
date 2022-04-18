#include <stdio.h>

/**
 * main - prints alphabet to display
 *
 * Return: 0
 */
int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
