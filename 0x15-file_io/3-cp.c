#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - copy file
 * @argc: argument count
 * @argv: argument string
 *
 * Description: copy file
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd, fd2, err, i;
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
	out = malloc(sizeof(char) * 1024);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	close(fd2);
	fd2 = open(argv[2], O_WRONLY | O_APPEND);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	i = 0;
	while (i < 4)
	{
		read(fd, out, 1024);
		write(fd2, out, 1024);
		i++;
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
