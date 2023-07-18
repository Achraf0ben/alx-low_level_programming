#include "main.h"

/**
 * print_to_98 - count the natural numbers from n to 98.
 * @n: value to count from.
 *
 */

int print_last_digit(int n)
{
	int last;
        last = n % 10;
        if (last < 0)
        {
                last = last * -1;
        }
        _putchar(last + 'a');
        return (last);
}
