#include <stdio.h>

// Function to input array elements
void input_arr(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to insert an element after a specified number
void insertAfterNumber(int arr[], int *n, int num, int x) {
    for (int i = 0; i < *n; i++) {
        if (arr[i] == num) {
            // Shift elements from position i+1 to the right
            for (int j = *n; j > i + 1; j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = x; // Insert the element after 'num'
            (*n)++; // Increase the size of the array
            break; // Exit loop after insertion
        }
    }
}

int main() {
    int arr[100];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    input_arr(arr, size);

    int num, x;
    printf("Enter the number after which you want to insert: ");
    scanf("%d", &num);

    printf("Enter the value to insert: ");
    scanf("%d", &x);

    // Call the function to insert 'x' after 'num'
    insertAfterNumber(arr, &size, num, x);

    // Print the updated array
    printf("Updated array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
