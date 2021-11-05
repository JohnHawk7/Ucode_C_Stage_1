// #include <stdio.h>
// char *mx_strchr(const char *s, int c) {
//    while (*s != (char) c) {
//         if (!*s++) {
//             return NULL;
//         }
//     }
//     return (char *)s;
// }
#include <stdlib.h>
​
char *mx_strchr(const char *s, int c) {
    for (; *s; ++s) {
        if (*s == c) {
            return (char *)s;
        }
    }
    return NULL;
}
int main() {
    char *str = "ab, asf, w4f, awef";
    mx_strchr(str, 2);
    return 0;
}
