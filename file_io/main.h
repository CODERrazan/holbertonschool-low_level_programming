#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>

/**
* _putchar - Writes a character to standard output.
* @c: The character to print.
*
* Return: On success, returns the number of characters written.
*         On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c);

/**
* read_textfile - Reads a text file and prints it to the POSIX standard output.
* @filename: The name of the file to read.
* @letters: The number of letters to read and print.
*
* Return: The actual number of letters read and printed,
*         or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters);
/**
* create_file - Creates a file with specified name and content.
* @filename: The name of the file to create.
* @text_content: The NULL-terminated string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content);
/**
* append_text_to_file - Appends text at the end of a file.
* @filename: The name of the file to append text to.
* @text_content: The NULL-terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content);

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @code: The exit code.
 * @msg: The error message to print.
 * @file: The filename to include in the error message, if applicable.
 */
void error_exit(int code, const char *msg, const char *file);


#endif /* MAIN_H */
