#ifndef HEX_TO_NBR_H
#define HEX_TO_NBR_H

#include <stdbool.h>
#include <stdlib.h>

bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_islower(char s);
bool mx_isupper(char s);
unsigned long mx_hex_to_nbr(const char *hex);

#endif
