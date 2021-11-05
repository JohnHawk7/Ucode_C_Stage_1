#ifndef HEADER_H
#define HEADER_H
#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen (const char *s);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
int mx_strcmp(const char *s1, const char *s2);

typedef struct s_student {
    char *first_name;
    char *last_name;
    int age;
} t_student;

#endif