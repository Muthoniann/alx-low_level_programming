#include "main.h"

/**
 * print_numbers - entry point
 * Description: Prints the numbers with _putchar
 * Return: void
 */

void print_numbers(void)
{
int i;

for (i = '0'; i <= '10'; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
