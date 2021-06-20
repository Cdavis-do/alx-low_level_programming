#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int argc;
char *argv;
unsigned int i;
for (i = 0; i <= 256; i+=16)
putchar("0x%04X\n", i, i);
putchar('\n')
return 0;
}
