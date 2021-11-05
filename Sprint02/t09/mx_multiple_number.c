#include <stdbool.h>

bool mx_multiple_number(int n, int mult) {
    if (mult == n * n) {
        return true;
    }
    else {
        return false;
    }
}
