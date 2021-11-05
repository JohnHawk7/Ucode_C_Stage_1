#include <stdlib.h>
#include <stdbool.h>
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str) {
    int i = 0;
    int max = 2147483647;
    int min = -2147483647;
    int sign = 1;
    int base = 0;
    while (mx_isspace(*str) && i == 0) {
        if(mx_isdigit(*str)) {
        i++;
        }
        else {
            str++;
        }
    }
    if (*str == '-' || *str == '+') {
        sign = 1 - 2 * (*(str++) == '-');
    }
    while (mx_isdigit(*str)) {
        if (base > max / 10 || (base == max / 10 && *str - '0' > 7)) {
            if (sign == 1)
                return max;
            else
                return min;
        }
        base = 10 * base + (*(str++) - '0');
    }
    return base * sign;
}
