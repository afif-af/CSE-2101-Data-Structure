#include <stdio.h>

void input_arr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}


void insertAtFast(int arr[], int *size, int x) {
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    (*size)++;

    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter array elements:\n");
    input_arr(arr, size);

    int x;
    printf("Enter element to insert at the beginning: ");
    scanf("%d", &x);

    insertAtFast(arr, &size, x);

    return 0;
}
