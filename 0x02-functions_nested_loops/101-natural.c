#include <stdio.h>


/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1025
 * Return: Always (Success)
 */


int main(void)
{
int sum = 0;
int i;
for (i = 0 ; i < 1024 ; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
