#include "file_to_str.h"

// static int flength(const char *filename) {
//     int fp = open(filename, O_RDONLY);
//     int length = 0;

//     length = mx_strlen(filename);

//     close(fp);
//     return length;
// }
static int flength(const char *filename) {
    short fl = open(filename, O_RDONLY);
    short sz = 0;
    int len = 0;
    char buf;
    sz = read(fl, &buf, 1);

    while (sz > 0) {
        sz = read(fl, &buf, 1);
        len++;
    }
    close(fl);
    return len;
}

 char *mx_file_to_str(const char *filename) {
    int file = 0;
    char filestr;
    char *str = NULL;

    file = open(filename, O_RDONLY);
  
    if (file < 0) {
        close(file);
        return NULL;
    }

    str = mx_strnew(flength(filename));

    if (&flength == 0) {
        close(file);
        return NULL;
    }

    filestr = read(file, str, flength(filename));
    close(file);
    return str;
}

// int main(void) {
    
//     printf("%d\n", flength("test.txt"));

//     printf("%s", mx_file_to_str("test.txt"));

//     return 0;
// }
