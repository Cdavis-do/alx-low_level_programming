#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{char s;
int a;
long int b;
long long int c;
float d;
printf("size of a char: %d byte(s)\n", sizeof(s));
printf("size of an int: %d byte(s)\n", sizeof(a));
printf("size of a long int: %d byte(s)\n", sizeof(b));
printf("size of a long long int: %d byte(s)\n", sizeof(c));
printf("size of a float: %d byte(s)\n", sizeof(d));
return (0);
}
