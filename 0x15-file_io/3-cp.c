#include"main.h"

/**
 * main - Entry point
 *
 * Description: A C program that prints with put function
 * @argc: argument counters
 * @argv: pointers to argument
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int fd_file_from, fd_file_to;
ssize_t char_read = 1, char_written;
char buffer[1024];

if (argc != 3)
{
write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
exit(97); }
fd_file_from = open(argv[1], O_RDONLY);
if (fd_file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
fd_file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
if (fd_file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); }
while (char_read != 0)
{
char_read = read(fd_file_from, buffer, 1024);
if (char_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
char_written = write(fd_file_to, buffer, char_read);
if (char_written == -1 || char_written != char_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99); } }
if (close(fd_file_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_from);
exit(100); }
if (close(fd_file_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
exit(100); }
return (0);
}
