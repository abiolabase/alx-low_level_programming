#include <stdio.h>
#include <time.h>

/**
 * main - Determines if a random number is positive or negative
 *
 * Return: Positive, Zero or Negative
 */
int main(void)
{
 int n;
 srand(time(0));
 n = rand() - RAND_MAX / 2;
 return (0);
}
