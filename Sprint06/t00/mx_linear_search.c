int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
    int i = 0;
    while (mx_strcmp(arr[i], s) != 0) {
        if (arr[i + 1] == '\0' && mx_strcmp(arr[i], s) != 0) {
            i = -1;
            break;
        }
        i++;
    }
    return i;

}
