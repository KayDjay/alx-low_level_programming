include "main.h"

/**
 * read_textfile - A function that read a text
 *
 * @filename: file to b open or read
 * @letters: content of text in the file
 *
 * Return: numbers of letter and print
 * (0) if no file, not open, not write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t o, r, w;
        char *buffer;

        if (filename == NULL)
                return (0);

        buffer = malloc(sizeof(char) * letters);
        if (buffer == NULL)
                return (0);

        o = open(filename, O_RDONLY);
        r = read(op, buffer, letters);
        w = write(STDOUT_FILENO, buffer, re);

        if (o == -1 || r == -1 || w == -1 || wri != r)
        {
                free(buffer);
                return (0);
        }

        free(buffer);
        close(o);

        return (w);
