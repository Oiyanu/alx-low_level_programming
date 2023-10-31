#include "main.h"
/**
 * read_textfile - reads and prints text file to POSIX stdout
 * @filename: pointer to string
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_des;
	ssize_t lenrd, lenwr;
	char *buff;

	if (!filename)
		return (0);

	f_des = open(filename, O_RDONLY);

	if (f_des == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	lenrd = read(f_des, buff, letters);
	lenwr = write(STDOUT_FILENO, buff, lenrd);

	close(f_des);
	free(buff);

	return (lenwr);
}

