#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 * find the last digit and check
 *
 * Return: Always 0 (success)
 */
int main(void)

{int n int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (l > 5)
printf('Last digit of %d is %d and is greater than 5\n', n, l);
else
if (l < 6)
printf('Last digit of %d is %d and is less than 6 and not 0\n', n, l);
else
printf('Last digit of %d is %d and is 0\n', n, l);
return (0);
}
