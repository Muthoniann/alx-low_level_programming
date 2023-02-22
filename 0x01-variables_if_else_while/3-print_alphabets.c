#include <stdio.h>
/**
* main - Entry point
*
* Description: 'takes no arguement and returns a string'
*
* Return: Always integer or astring (Success)
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
