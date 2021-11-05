#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool mx_isspace(char c);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);

char *mx_strtrim(const char *str) {
 int beg = 0;
 int end;
 char *new = NULL;
 int size;

 if (str == NULL)
  return NULL;
 end = mx_strlen(str) - 1;
 while (mx_isspace(str[beg]))
  beg++;
 while (mx_isspace(str[end]))
  end--;
 size = end - beg + 1;
 new = mx_strnew(size);
 for (int i = 0; i < size; i++) {
  new[i] = str[beg];
  beg++;
 }
 return new;
}
