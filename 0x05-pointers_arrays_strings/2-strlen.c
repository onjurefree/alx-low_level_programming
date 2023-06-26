#include <stdio.h>

/**
  *_strlen _ Returns the length of a string.
  * @str: The string to get the length of
  * Return: The lenghth of @str.
  */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
