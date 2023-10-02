#include "main.h"
/**
 * print_rev_recursion - prints a string in reverse.
 * @s:the strings
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	if (s[i] == '\0')
	{
		return;
	}
	_print-rev-recursion(s + 1);
	_putchar(s[i]);

}
