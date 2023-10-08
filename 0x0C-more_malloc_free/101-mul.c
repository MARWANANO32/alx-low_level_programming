#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define ERR_MSG "Erorr"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *mr1, *mr2;
	int le1, le2, le, b, carry, digit1, digit2, *result, c = 0;

	mr1 = argv[1], mr2 = argv[2];
	if (argc != 3 || !is_digit(mr1) || !is_digit(mr2))
		errors();
	le1 = _strlen(mr1);
	le2 = _strlen(mr2);
	le = le1 + le2 + 1;
	result = malloc(sizeof(int) * le);
	if (!result)
		return (1);
	for (b = 0; b <= le1 + le2; b++)
		result[b] = 0;
	for (le1 = le1 - 1; le1 >= 0; le1--)
	{
		digit1 = mr1[le1] - '0';
		carry = 0;
		for (le2 = _strlen(mr2) - 1; le2 >= 0; le2--)
		{
			digit2 = mr2[le2] - '0';
			carry += result[le1 + le2 + 1] + (digit1 * digit2);
			result[le1 + le2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[le1 + le2 + 1] += carry;
	}
	for (b = 0; b < le - 1; b++)
	{
		if (result[b])
			c = 1;
		if (c)
			_putchar(result[b] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
