#include <stdio.h>
/**
 * main -  Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int ct = '0';
while (ct <= '9')
{putchar(ct);
ct++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
