#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Comparing value in array at index %zu: %d
", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9, 5};
    int value = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linear_search(arr, size, value);

    if (index != -1) {
        printf("Value %d found at index %d
", value, index);
    } else {
        printf("Value %d not found in the array
", value);
    }

    return 0;
}

