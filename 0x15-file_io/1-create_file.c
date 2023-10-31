#include "main.h"
/**
 * create_file - program creates a file and writes
 * @filename: filename to be created
 * @text_content: content to be copied
 * Return: 1 on success, -1 on eror
 */
int create_file(const char *filename, char *text_content)
{
	int f_des;
	int lenlett;
	int lenwr;

	if (!filename)
		return (-1);

	f_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f_des == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (lenlett = 0; text_content[lenlett]; lenlett++)
		;
	lenwr = write(f_des, text_content, lenlett);

	if (lenwr == -1)
		return (-1);
	close(f_des);

	return (1);
}
