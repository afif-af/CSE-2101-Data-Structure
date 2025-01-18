#include<stdio.h>

int array[1000];

void input_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

void insertion_sort(int array[], int n)
{
    int j, temp;
    for (int i = 1; i < n; i++)
    {
        temp = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}

void print_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter your range of array: ");
    scanf("%d", &n);
    printf("Enter your array: ");
    input_array(n);
    printf("Inserted sorted array: ");
    insertion_sort(array, n);
    print_array(n);

    return 0;
}
