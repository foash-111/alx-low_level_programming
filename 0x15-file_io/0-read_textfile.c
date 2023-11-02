#include"main.h"
/**
 * read_textfile -  function that reads a text file and prints it to the POSIX
 * @filename: filename
 * @letters: letters
 * Return: nums of chars written
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t chars_read, chars_written;
	char *buffer;

if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	chars_read = read(fd, buffer, letters);

if (chars_read == -1)
{
free(buffer);
return (0);
}

buffer[chars_read] = '\0';

chars_written = write(STDOUT_FILENO, buffer, chars_read);

if (chars_written == -1 || chars_written != chars_read)
{
free(buffer);
return (0);
}

free(buffer);
close(fd);

return (chars_written);
}
