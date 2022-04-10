#include <stdio.h>

/**
 * main - Prints the size of various data type on computer
 *
 * Return: 0
 */
int main(void)
{
char data_type[5][13] = {"char", "int", "long int", "long long int", "float"};
for (int i=0; i<5; i++)
{
if (data_type[i] == "int")
{
  printf("Size of an %s: %d byte(s)\n", data_type[i], (int)sizeof(data_type[i]));
}
else
{
printf("Size of a %s: %d byte(s)\n", data_type[i], (int)sizeof(data_type[i]));
}
return (0);
}
