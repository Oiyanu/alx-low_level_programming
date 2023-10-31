#include "main.h"
/**
 * append_text_to_file - function adds text to file
 * @filename: file to append content
 * @text_content: content to append
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_des;
	int lenlett;
	int lenwr;

	if (!filename)
		return (-1);

	f_des = open(filename, O_WRONLY | O_APPEND);

		if (f_des == -1)
			return (-1);
	if (text_content)
	{
		for (lenlett = 0; text_content[lenlett]; lenlett++)

		lenwr = write(f_des, text_content, lenlett);

		if (lenwr == -1)
			return (-1);
	}
	close(f_des);

	return (-1);
}



