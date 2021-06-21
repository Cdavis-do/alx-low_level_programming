#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int a, b, c;
for (a = 48; a <= 57; a++)
for (b = 48; b <= 57; b++)
for (c = 48; c <= 57; c++)
if (c > b && b > a)
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56)
putchar(',');
putchar(32);
putchar('\n');
return (0);
}
