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
printf("size of char = %d bytes\n", sizeof(s));
printf("size of int = %d bytes\n", sizeof(a));
printf("size of long int = %d bytes\n", sizeof(b));
printf("size of long long int = %d bytes\n", sizeof(c));
printf("size of float = %d bytes\n", sizeof(d));
return (0);
}
