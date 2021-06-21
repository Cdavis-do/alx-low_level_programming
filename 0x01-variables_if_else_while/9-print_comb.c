#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int ch = 48;
for (; ch <= 57; ch++)
putchar(ch);
if (ch == 57)
break;
putchar(',');
putchar(32);
putchar('\n');
return (0);
}
