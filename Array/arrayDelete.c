#include<stdio.h>
int array[1000];

void input_array(int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}

void delete_array(int array[],int n,int p)
{
    for(int i=p-1;i<n-1;i++)
    {
        array[i]=array[i+1];
    }
    n=n-1;
    for(int j=0;j<n;j++)
    {
        printf("%d ",array[j]);
    }
}



int main()
{

    int n,p;
    printf("Enter your Array size: ");
    scanf("%d",&n);
    printf("Enter your Array element: ");
    input_array(n);
    printf("Enter Position for delete :");
    scanf("%d",&p);
    delete_array(array,n,p);


}
