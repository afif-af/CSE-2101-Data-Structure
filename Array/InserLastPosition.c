#include <stdio.h>

void input_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}

void insert_at_last(int array[], int *n, int x) {
    array[*n] = x;
    (*n)++;
}

void print_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int array[n+1];

    printf("Enter array elements: ");
    input_array(array, n);

    int x;
    printf("Enter number to insert at last position: ");
    scanf("%d", &x);

    insert_at_last(array, &n, x);

    printf(" array: ");
    print_array(array, n);

    return 0;
}
