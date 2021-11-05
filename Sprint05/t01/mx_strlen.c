#include <stdio.h>
int mx_strlen(const char *s) {
    int size = 0;
    // for(; s[size] != '\0'; size++);
    // return size;
        while(s[++size]);
    return size;
}
