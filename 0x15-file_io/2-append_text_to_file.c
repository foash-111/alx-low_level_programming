#include"main.h"

/**
 * append_text_to_file - append_text_to_file
 * @filename: filename
 * @text_content: text_content
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, written_chars = -1;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);


if (text_content)
{

while (text_content[len])
len++;

written_chars = write(fd, text_content, len);


if (written_chars == -1 || written_chars != len)
return (-1);

}

close(fd);

return (1);

}
