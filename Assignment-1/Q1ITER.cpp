#include <stdio.h>

int binarySearch(int a[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == x)
            return mid;
        else if (x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int a[] = {3, 7, 11, 15, 19, 24, 31, 42};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 15;

    int pos = binarySearch(a, 0, n - 1, x);

    if (pos == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", pos);

    return 0;
}
