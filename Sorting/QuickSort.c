#include <stdio.h>

int array[1000];

void input_array(int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int l, int h) {
    int pivot = array[l];
    int i = l;
    int j = h;

    while (i < j) {
        while (i <= h && array[i] <= pivot) {
            i++;
        }
        while (j >= l && array[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[l], &array[j]);
    return j;
}

void quick_sort(int array[], int l, int h) {
    if (l < h) {
        int j = partition(array, l, h);
        quick_sort(array, l, j - 1);
        quick_sort(array, j + 1, h);
    }
}


void print_array(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter your range of array: ");
    scanf("%d", &n);

    printf("Enter your array: ");
    input_array(n);

    printf("Quick Sorted array: ");
    quick_sort(array, 0, n - 1);
    print_array(n);

    return 0;
}
