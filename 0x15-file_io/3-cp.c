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
 * main - Copies content of a file to another file
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 1 if successful, -1 if failed
 **/

int main(int argc, char *argv[])
{
	int fdfile1, fdfile2, r, w, cl;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfile1 = open(argv[1], O_RDONLY);
	r = read(fdfile1, buffer, 1024);
	if (fdfile1 == -1 || r == -1 || !argv[1])
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	cl = close(fdfile1);
	if (cl == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	fdfile2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 00664);
	w = write(fdfile2, buffer, 1024);
	if (fdfile2 == -1 || w == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	cl = close(fdfile2);
	if (cl == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (1);
}
