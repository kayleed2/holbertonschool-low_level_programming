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
	int fdopen;
	int len = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);

	if (text_content == NULL)
		return (1);

	write(fdopen, text_content, len);
	return (1);
}
