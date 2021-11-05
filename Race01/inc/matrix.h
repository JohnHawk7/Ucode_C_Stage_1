#ifndef MATRIX_H
#define MATRIX_H

#include <string.h>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>

struct column {
	char *rows;
};

int get_prob(int percentage);
int kbhit(void);
char get_random_num();
void get_term_size(WINDOW *mainwin,int *rows, int *cols);
int matrix(WINDOW *mainwin);

#endif
