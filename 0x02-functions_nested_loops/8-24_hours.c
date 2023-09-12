#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 *
 *
 *just print
 *
 *
 *Return: nothing
 *
*/

void jack_bauer(void)
{

for (int loop_24_hour = 0; loop_24_hour < 24; loop_24_hour++)
{

for (int loop_60_minute = 0; loop_60_minute < 60; loop_60_minute++)
{

putchar(loop_24_hour / 10 + 48);
putchar(loop_24_hour % 10 + 48);
putchar(':');
putchar(loop_60_minute / 10 + 48);
putchar(loop_60_minute  % 10 + 48);
putchar('\n');
}

}

}
