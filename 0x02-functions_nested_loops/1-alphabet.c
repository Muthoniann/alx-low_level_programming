#include "main.h"
#include <stdio.h>
/**
* main - entry point
* return: always 0
*  print_alphabet
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
_putchar('\n');
}
return (0);
}
