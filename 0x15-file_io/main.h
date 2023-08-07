#ifndef main_h
#define main_h

#include <sys/types.h>
#include <sys/star.h>
#include < fcntl.h>
#include <unsistd.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

#endif
