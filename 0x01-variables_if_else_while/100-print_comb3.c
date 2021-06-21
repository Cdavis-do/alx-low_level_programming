#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int b, a;
for (b = 48; b <= 57; b++)
for (a = 48; a <= 57; a++)
if (a > b)
putchar(b);
putchar(a);
if (b != 56 || a !=57)
putchar(',');
putchar(32);
putchar('\n');
return (0);
}
