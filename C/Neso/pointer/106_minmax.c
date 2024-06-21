#include <stdio.h>

void minmax(int arr[], int len, int *min, int *max) {
    int i;
    *min = *max = arr[0];
    for (i = 1; i < len; i++) {
        if (*min > arr[i]) {
            *min = arr[i];
        } else if (*max < arr[i]) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 3, 54, 64, 23, 4, 6, 2, 8, 9, 33, 43, 54, 65, 44};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    minmax(arr, len, &min, &max);
    printf("The min element is : %d and the max element is : %d\n", min, max);

    return 0;
}
