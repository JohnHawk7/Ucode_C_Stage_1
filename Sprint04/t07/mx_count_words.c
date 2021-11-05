int mx_count_words(const char *str, char delimiter) {
    int word = 0;
    while (*str) {
        str++;
        if (*str == delimiter) {
            while (*str == delimiter) {
                str++;
            }
            word++;
        }
    }
    return word;
}
