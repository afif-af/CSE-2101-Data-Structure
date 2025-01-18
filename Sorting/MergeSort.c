#include<stdio.h>

int array[1000], temp[1000];

void input_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

void merge(int a[], int l, int mid, int h)
{
    int i = l;
    int j = mid + 1;
    int k = l;

    while (i <= mid && j <= h)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= h)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (i = l; i <= h; i++)
    {
        a[i] = temp[i];
    }
}

void merge_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, h);
        merge(a, l, mid, h);
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
    printf("Merge Sorted array: ");
    merge_sort(array, 0, n - 1);
    print_array(n);

    return 0;
}
