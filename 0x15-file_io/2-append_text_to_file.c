#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - (-1).
 *         If the file does not exist or the user lacks write permissions - (-1).
 *         Otherwise - (1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int o, w, len = 0;

    if (filename == NULL)
        return (-1);

    // Calculate the length of the text_content if it's not NULL.
    if (text_content != NULL)
    {
        for (len = 0; text_content[len]; len++)
            ;
    }

    // Open the file for writing and appending.
    o = open(filename, O_WRONLY | O_APPEND);
    if (o == -1)
        return (-1);

    // Write the text_content to the file.
    w = write(o, text_content, len);
    if (w == -1)
    {
        close(o);
        return (-1);
    }

    // Close the file and return success.
    close(o);
    return (1);
}
