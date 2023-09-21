#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)i
{
	int = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int rev_n = 0;

	while (n > 0)
	{
		rev_n = rev_n * 10 + n % 10;
		n /= 10;
	}
	while (rev_n > 0)
	{
		_putchar(rev_n % 10 + '0');
		rev_n /= 10;
	}
}

int main(void)
{
	int n = 42;

	print_integer(n);
	_putchar('\n');
}
