#include "main.h"

/**
 * mul -multiple two integer number1, number2
 * @number1: int the multiplied to number2
 * @number2: int the multiplied ti number1
 * return: the result of the operation
 */

int  mul(int number1, int number2)
{
	int number1 = 0, number2 = 0, result = 0;

	printf("ENTRY THE FIRST NUMBER : ");
	scanf("%d", &number1);
	printf("ENTRY THE SECOND NUMBER : ");
	scanf("%d", &number2);
	result = number1 * number2;

	printf("%d * %d = %d\n", number1, number2, result);
	return (result);
}
