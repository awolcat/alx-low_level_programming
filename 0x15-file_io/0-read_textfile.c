#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
/**
 * read_textfile - read a file and print its contents
 * @filename: name of file
 * @letters: number of chars to read
 *
 * Description: read a file and print its content. Usage: prog filename
 * Return: number of chars read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *out;
	size_t bytes, bytes2;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 00400);
	if (fd == -1)
		return (0);
	out = malloc(sizeof(char) * letters + 1);
	if (!out)
		return (0);
	bytes = read(fd, out, letters);
	if ((read(fd, out, letters)) == -1)
		return (0);
	if (strlen(out) != bytes)
		return (0);
	bytes2 = write(1, out, bytes);
	if ((write(1, out, bytes)) == -1 || bytes != bytes2)
		return (0);
	close(fd);
	return (bytes);
}
