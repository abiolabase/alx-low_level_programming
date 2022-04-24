#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the value of a with b and vice verca
 * @a: first parameter to swap
 * @b: second parameter to swap
 *
 * Return: swapped values
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
