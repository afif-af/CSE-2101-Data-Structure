#include <stdio.h>

void input_arr(int arr[],int size) {
    printf("Enter %d elements:\n", size);
    for (int i=0;i<size; i++) {
        scanf("%d",&arr[i]);
    }
}

void insertAfterNumber(int arr[], int *n,int num,int x) {
    for (int i=0;i<*n; i++) {
        if (arr[i] == num) {
            for (int j = *n; j>i+1;j--) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = x; 
            (*n)++; 
            break;
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
    insertAfterNumber(arr, &size, num, x);
    printf("Updated array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
