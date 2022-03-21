#include "main.h"

/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	  for (i = 0; *str; str += 2) {
    _putchar(*str);
  }
}
