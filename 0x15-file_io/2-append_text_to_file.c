#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * append_text_to_file - append text to text file
 * @filename: name of the file
 * @text_content: text to append to file
 *
 * Description: append a file
 * Return: 1 success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (; text_content[i]; i++)
		;
	write(fd, text_content, i - 1);
	close(fd);
	return (1);
}
