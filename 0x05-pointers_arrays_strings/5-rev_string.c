#include "main.h"

/**
  * rev_string _ Reverses a string
  * @s: The string to be modified
  * Retur: void
  */
void rev_string(char *s)
{

	int len = 0, index = 0;
	char tmp;

	While (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index -1] = tmp;
	}
}
