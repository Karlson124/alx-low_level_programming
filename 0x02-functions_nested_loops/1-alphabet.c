#include "main.h"
/**
 *print alphabet - print all alphabet in lowercase
 *
 *Return: Alway return 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}