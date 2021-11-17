#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>
#include <string.h>
/**
 * create_file - Creates a file
 * @filename: Filename
 * @text_content: String to write to file
 * Return: 1 for success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fdopen, w;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fdopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fdopen == -1)
		return (-1);
	w = write(fdopen, text_content, len);
	if (w == -1)
		return (-1);
	return (1);
}
