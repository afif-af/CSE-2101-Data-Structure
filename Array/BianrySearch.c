#include<stdio.h>
int array[1000];

void input_array(int n)
{
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}



int binary_search(int array[],int n,int data)
{
    int l,r;
    l=0;
    r=n-1;


    while(l<=r)
      {
         int mid=(l+r)/2;


            if(array[mid]==data)
            {
               return mid;


            }
            else if(array[mid]<data)
            {
              l=mid+1;
            }
            else
            {
              r=mid-1;
            }

       }
    return -1;
}


int main()
{
    int n,data,p;
    printf("Enter your range of array : ");
    scanf("%d",&n);
    printf("Enter your array : ");
    input_array(n);
    printf("Enter your number for binary Search: ");
    scanf("%d",&data);

    p=binary_search(array,n,data);
    if (p != -1) {
        printf("Element found at index %d\n", p);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
