#include "main.h"

/**
 * _puts_recursion -  function that prints a string
 *
 *@s : pointer to the start of the string
 *
 * Return : nothing >> always >> 0 (succeed)
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}

else
{
_putchar('\n');
return;
}


}
