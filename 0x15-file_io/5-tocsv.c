#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * tocsv - function that converts to csv
 *@file_source: source file
 *@file_destination: destination file
 * Return: 1 on success, -1 on failure
 */

ssize_t tocsv(char *file_source, size_t letters)
{

    int fd1, read_out, write_out;
    size_t i = 0, j = 0;
    char *buf, *dest;

    /*fd2 = open(file_destination, O_WRONLY, 0600);
    if (fd2 == -1)
        return (-1);*/

    /*read*/
    fd1 = open(file_source, O_RDONLY, 0600);
    if (fd1 == -1)
        return (-1);

    buf = malloc(sizeof(char) * letters);
    if(!buf)
        return(-1);
    dest = malloc(sizeof(char) * letters);
    if(!dest)
        return(-1);

    read_out = read(fd1, buf, letters);
    if (read_out == -1)
    {
        close(fd1);
        free(buf);
        free(dest);
        return (-1);
    }

    for (i = 0; i < letters; i++, j++)
    {
        dest[j] = buf[i];
        if (buf[i] == ' ')
        {
            if (buf[i - 1] >= 'a' && buf[i - 1] <= 'z')
                continue;
            dest[j] = ';';
            dest[j + 1] = ' ';
            j++;
        }
        if (buf[i] == ';' && buf[i + 2] == 'D')
        {
            while (buf[i + 1] != '0' && buf[i + 1] != '9')
            {
                dest[j] = ';';
                dest[j + 1] = ' ';
                i++;
            }
            j++;
        }
        if(buf[i] == '/')
            dest[j] = '-';

        /*if(buf[i] == ':')
        {
            if(buf[i - 2] == 1 && buf[i - 1] > 2)
                dest[j] = buf[i - 1]); 


            dest[j - 4] = 0;
        }*/

    }

    write_out = write(STDOUT_FILENO, dest, read_out);
    if (write_out == -1)
        return (-1);

    free(buf);
    close(fd1);
    return (write_out);
}

/**
 * main - main function
 * text at the end of a file.
 *@file_from: the name of the file to create
 *@file_to: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int main(int ac, char *av[])
{

    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }

    n = tocsv(av[1], 2400);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
