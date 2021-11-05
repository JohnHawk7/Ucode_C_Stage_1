char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;
    while (*src && i < len) {
        *dst = *src;
        src++;
        dst++;
        i++;
    }
    return dst;
}
