#include "main.h"
/***
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, w, r;
	char *ptr;
	size_t i = 0;
	if (filename == NULL)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	while (i < letters)
		i++;
	o = open(filename, O_RDONLY);
	r = read(o, ptr, i);
	w = write(STDOUT_FILENO, ptr, r);
	ptr[i + 1] = '\0';
	if (0 == -1 || r == -1 || w != r)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	close(0);
	return (w);
}
