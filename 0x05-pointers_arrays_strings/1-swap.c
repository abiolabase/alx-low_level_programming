#include <stdio.h>

/**
 * main - swaps the value of a with b and vice verca
 * @a: first parameter to swap
 * @b: second parameter to swap
 *
 * Return: swapped values
 */
int swap_int(int *a, int *b)
{
int c;
c = &a;
*a = &b;
*b = c;
Return (0);
}
