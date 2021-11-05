#ifndef FILECAT_H
#define FILECAT_H

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
int main(int argc, char *argv[]);

#endif
