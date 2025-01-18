#include<stdio.h>
int array[1000];

void input_array(int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}

void traverse_array(int n)
{
    printf("Array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{

    int n;
    printf("Enter your array size: ");
    scanf("%d",&n);
    printf("Enter your Array : ");
    input_array(n);
    traverse_array(n);

}
