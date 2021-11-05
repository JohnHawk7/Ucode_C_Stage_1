#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

#define MX_SUCCESS_PHRASE "Follow me!"
#define MX_FAIL_PHRASE "Perhaps I was wrong about you, Neo."
#define MX_UNDEFINED_PHASE "Are you sure about that?"

#define MX_RED_PILL 1
#define MX_BLUE_PILL 0

#include <stdlib.h>

typedef char t_phrase;

t_phrase *mx_strdup(const char *s1);

#endif
