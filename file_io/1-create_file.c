#include "main.h"

/**
* create_file - create a file
* @filename: name of file
* @text_content: string
* Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, x, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (x = 0; text_content[x] != '\0'; x++)
			;
		w = write(fd, text_content, x);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
