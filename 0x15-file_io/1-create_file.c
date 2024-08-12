#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can't be created, written, etc.)
 */
int create_file(const char *filename, char *text_content)
{
    int fd, length = 0, written;

    if (filename == NULL)
        return (-1);

    /* Open file with O_CREAT, O_WRONLY and O_TRUNC flags, set permissions to rw------- */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        /* Calculate the length of text_content */
        while (text_content[length])
            length++;

        /* Write the text_content to the file */
        written = write(fd, text_content, length);
        if (written == -1)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
