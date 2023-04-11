#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the file to read
 * @letters: Number of letters to read and print
 * Return: Actual number of letters it could read and print. Returns 0 if the
 * file could not be opened or read. If filename is NULL, returns 0. If write
 * fails or does not write the expected amount of bytes, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, ret;
ssize_t nread, nwritten;
char *buffer;
if (filename == NULL)
{
return (0);
}
buffer = malloc(letters);
if (buffer == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
nread = read(fd, buffer, letters);
if (nread == -1)
{
free(buffer);
close(fd);
return (0);
}
nwritten = write(STDOUT_FILENO, buffer, nread);
if (nwritten == -1 || nwritten != nread)
{
free(buffer);
close(fd);
return (0);
}
ret = (ssize_t)nwritten;
free(buffer);
close(fd);
return (ret);
}
