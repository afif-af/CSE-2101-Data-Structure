#include <stdio.h>

int array[1000];

void input_array(int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
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

int getMax(int array[], int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
              max = array[i];
        }
    }

    return max;
}

void counting_sort(int array[], int n, int p)
{
    int output[n];
    int count[10] = {0};

    for (int i=0;i< n;i++)
    {
        int indx=(array[i]/p)%10;
        count[indx]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i= n-1;i>=0;i--)
    {
        int indx=(array[i]/p)%10;
        output[count[indx] - 1]=array[i];
        count[indx]--;
    }

    for (int i = 0; i < n; i++)
    {
         array[i] = output[i];
    }

}

void radix_sort(int array[],int n)
{
    int maxNumber=getMax(array,n);

    for (int p=1;maxNumber/p>0;p*= 10)
        counting_sort(array,n,p);
}

int main()
{
    int n;
    printf("Enter your range of array: ");
    scanf("%d", &n);
    printf("Enter your array: ");
    input_array(n);
    printf("Radix Sorted array: ");
    radix_sort(array, n);
    print_array(n);

    return 0;
}
