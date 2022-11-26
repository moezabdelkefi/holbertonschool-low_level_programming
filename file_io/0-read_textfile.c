#include "main.h"
/**
 * read_textfile - a function that reads a text file and prints it
 *@filename: argument
 *@letters:argument
 *Return: write that you printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *ptr;

	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);
	if (0 == -1 || r == -1 || w != r)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	close(0);
	return (w);
}
