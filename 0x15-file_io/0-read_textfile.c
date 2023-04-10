#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of bytes read and printed, or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes_read, num_bytes_written;
	int fd;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_bytes_read = read(fd, buffer, letters);
	if (num_bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[num_bytes_read] = '\0';

	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (num_bytes_written);
}
