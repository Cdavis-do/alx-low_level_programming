#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{char ch = 'a';
char gh = 'A';
char hd = '\n';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (gh = 'A'; gh <= 'Z'; gh++)
putchar(gh);
for (hd = '\n'; hd++)
putchar(hd);
return (0);
}
