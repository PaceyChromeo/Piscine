#ifndef DISPLAY_FILE_H
#define DISPLAY_FILE_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096
#define READ_ERR "Cannot read file.\n"
#define NAME_MISS "File name missing.\n"
#define MANY_ARG "Too many arguments.\n"

#endif