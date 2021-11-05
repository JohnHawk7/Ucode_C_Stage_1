#include <stdlib.h>
#include <stdio.h>
char *mx_strcat(const char *s1, const char *s2);
char *mx_strdup(const char *s1);

char *mx_strjoin(char *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    else
        return mx_strcat(mx_strdup(s1), mx_strdup(s2));
}
