#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file to append to
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, length;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content == NULL)
{
close(fd);
return (1);
}
for (length = 0; text_content[length]; length++)
continue;
bytes_written = write(fd, text_content, length);
close(fd);
if (bytes_written == -1)
return (-1);
return (1);
}

