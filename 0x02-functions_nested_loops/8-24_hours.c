#include "main.h"

/**
 * jack_bauer - make every minute count
 *
 * Description: every moment matters (print every minute)
 */
void jack_bauer(void)
{
	int hour, min;
	int yhour; /* holds the tens of the hour hand */
	int xhour; /* holds the unit of the hour hand */
	int ymin; /* holds the tens of the minute hand */
	int xmin; /* holds the unit of the minute hand */

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			yhour = hour / 10 + 48; /* '0' = 48 */
			xhour = hour % 10 + 48;
			ymin = min / 10 + 48;
			xmin = min % 10 + 48;
			_putchar(yhour);
			_putchar(xhour);
			_putchar(':');
			_putchar(ymin);
			_putchar(xmin);
			_putchar('\n');
		}
	}
}
