#ifndef EXERCICES_H
#define EXERCICES_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);
ssize_t read(int fd, void * buf, size_t count);
ssize_t write(int fd, void * buf, size_t count);
off_t lseek(int fd, off_t offset, int whence);
int close(int fd);

#endif //EXERCICES_H
