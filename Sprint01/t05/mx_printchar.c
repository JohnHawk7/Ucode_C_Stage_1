#include <unistd.h>

void mx_only_printable(void);

void mx_printchar(char c) {
   write(1, &c, 1);
   write(1, "\n", 1);
}
// int main(void) {
//     mx_only_printable();
//     return 0;
// }
