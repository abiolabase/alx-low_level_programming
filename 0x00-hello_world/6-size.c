#include <stdio.h>

/**
 * main - Prints the size of various data type on computer
 *
 * Return: 0
 */
int main(void)
{
int i;
char data_type[5][13] = {"char", "int", "long int", "long long int", "float"};
printf("Size of a %s: %d byte(s)\n", "char", sizeof(char));
printf("Size of an %s: %d byte(s)\n", "int", sizeof(int));
printf("Size of a %s: %d byte(s)\n", "long int", sizeof(long int));
printf("Size of a %s: %d byte(s)\n", "long long int", sizeof(long long int));
printf("Size of a %s: %d byte(s)\n", "float", sizeof(float));
return (0);
}
