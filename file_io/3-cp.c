#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
/**
* error_exit - Prints an error message and exits the program.
* @code: The exit code.
* @msg: The error message.
* @file: The file name to include in the error message.
*/
void error_exit(int code, const char *msg, const char *file)
{
if (file)
dprintf(STDERR_FILENO, "%s %s\n", msg, file);
else
dprintf(STDERR_FILENO, "%s\n", msg);
exit(code);
}
/**
* main - Copies the content of one file to another.
* @argc: The number of command-line arguments.
* @argv: The argument vector containing file names.
*
* Return: 0 on success, exits with the appropriate error code on failure.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to", NULL);
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Error: Can't read from file", argv[1]);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
error_exit(99, "Error: Can't write to", argv[2]);
while (1)
{
bytes_read = read(fd_from, buffer, 1024);
if (bytes_read == -1)
error_exit(98, "Error: Can't read from file", argv[1]);
if (bytes_read == 0) /* End of file */
break;
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
error_exit(99, "Error: Can't write to", argv[2]);
}
if (close(fd_from) == -1)
error_exit(100, "Error: Can't close fd", argv[1]);
if (close(fd_to) == -1)
error_exit(100, "Error: Can't close fd", argv[2]);
return (0);
}
