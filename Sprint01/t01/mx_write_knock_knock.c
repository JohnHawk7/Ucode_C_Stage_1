#include <unistd.h>
#include <string.h>
void mx_write_knock_knock(void) {
    char *str1 = "Follow the white rabbit.\nKnock, knock, Neo.\n";
    write(1, str1, strlen(str1));
}
// int main(void) {
//     mx_write_knock_knock();
//     return 0;
// }
