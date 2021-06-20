#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{int argc;
char **argv)
printf("INT_MAX     :   %d\n", INT_MAX);
printf("INT_MIN     :   %d\n", INT_MIN);
printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
return (0);
}
