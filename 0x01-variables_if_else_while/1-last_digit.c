#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Description: 'takes no arguement and returns an integer'
*
* Return: Always integer or float (Success)
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n, l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l == 0)
{
printf("Last digit of %d is %d and is 0\n", n, l);
}
else if (l > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n,  l);
}
return (0);
}
