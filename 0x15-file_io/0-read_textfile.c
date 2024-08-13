#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print,
 *         or 0 if the file cannot be opened or read, or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t read_len, write_len;
    char *buffer;

    if (filename == NULL)
        return (0);

    /* Open the file */
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        close(fd);
        return (0);
    }

    /* Read from the file */
    read_len = read(fd, buffer, letters);
    if (read_len == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Write to standard output */
    write_len = write(STDOUT_FILENO, buffer, read_len);
    if (write_len == -1 || write_len != read_len)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    /* Clean up */
    free(buffer);
    close(fd);

    return (write_len);
}
