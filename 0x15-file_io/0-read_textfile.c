#include "main.h"
#include <stdlib.h>
/**
 * *read_textfile - the function that read and print text
 * @filename : a pointer to the name
 * @letters: the number of letter
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, wr;
	char *name;

	name = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	re = read(op, name, letters);
	wr = write(STDOUT_FILENO, name, re);

	if (op == -1 || re == -1 || wr != re)
	{
		free(name);
		return (0);
	}
	free(name);
	close(op);

	return (wr);
}
