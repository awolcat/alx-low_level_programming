#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * create_file - open a file or create if it does not exist
 * @filename: name of file
 * @text_content: what to awrite to file
 *
 * Description: open and set user rw permissions
 * Return: 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 00600);
	if (fd < 0)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	write(fd, text_content, i);
	close(fd);
	return (1);
}
