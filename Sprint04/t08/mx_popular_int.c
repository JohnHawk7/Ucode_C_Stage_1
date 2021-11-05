int mx_popular_int(const int *arr, int size) {
int count = 0;
int next = 0;
    for (int i = 0; i < size; i++) {
        for (; next < size; next++) {
            if (arr[i] == arr[next]) {
                count++;
            }
        }
    }
}
