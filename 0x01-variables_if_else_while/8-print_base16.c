#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int x;

char y;

for (x = 0 ; x < 10 ; x++)
{
putchar(x+48);
}
for (y = 'a' ; y < 'g' ; y++)
{
putchar(y);
}
putchar('\n');
return (0);
}
