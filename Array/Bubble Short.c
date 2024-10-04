#include <stdio.h>


void input_arr(int arr[], int size) {

    printf("Enter %d elements : \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);

    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
            {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void output_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}
int main() {
    int arr[100];
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    input_arr(arr, size);

    bubbleSort(arr, size);

    printf("Bubble Sorted Array : ");
    output_arr(arr, size);
    printf("\n");

    return 0;
}

