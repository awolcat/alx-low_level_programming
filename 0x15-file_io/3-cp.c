#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int fd, fd2, err;
	char *out;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 50);
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	out = malloc(sizeof(char) * 1024);
	while(read(fd, out, 1024))
	{
		read(fd, out, 1024);
		write(fd2, out, 1024);
	}
	err = close(fd);
	if (err != 0)
	{
		dprintf(2, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	err = close(fd2);
	if (err != 0)
        {
                dprintf(2, "Error: Can't close fd %s\n", argv[1]);
                exit(100);
	}
	return (argc);
}


	
/**
 * read_textfile - read a file and print its contents
 * @filename: name of file
 * @letters: number of chars to read
 *
 * Description: read a file and print its content. Usage: prog filename
 * Return: number of chars read and printed

int read_file(const char *filename, size_t letters, int *fd)
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
*/
