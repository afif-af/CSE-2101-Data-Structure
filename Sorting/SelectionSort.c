#include<stdio.h>

int array[1000];

void input_array(int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}

void selection_sort(int array[], int n)
{
    int i, j, min, temp;
    for (i=0;i<n-1;i++)
    {
        min = i;
        for (j=i+1;j<n;j++)
        {
            if (array[j]<array[min])
            {
                min=j;
            }
        }
        
        if (min!=i)
        {
            temp = array[i];
            array[i]=array[min];
            array[min]=temp;
        }
    }
}

void print_array(int n)
{
    for (int i=0;i<n;i++)
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
    printf("Selection Sorted array: ");
    selection_sort(array, n);
    print_array(n);

    return 0;
}
