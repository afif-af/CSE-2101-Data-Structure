#include<stdio.h>
int array[1000];

void input_array(int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}

void bubble_sort(int array[],int n)
{
    int temp,flag;

    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

                flag=1;
            }
        }
        if(flag==0){
            break;
        }

    }
}

void print_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{

    int n;
    printf("Enter your Array size: ");
    scanf("%d",&n);
    printf("Enter your Array element: ");
    input_array(n);

    bubble_sort(array,n);

    printf("Bubble Sorted Array : ");
    print_array(array,n);

   return 0;

}


