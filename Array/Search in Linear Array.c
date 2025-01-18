#include<stdio.h>
int array[1000];

void input_array(int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
}

void linear_Search(int n,int data)
{
    int found=0;
     for (int i=0;i<n;i++)
      {
          if(array[i]==data)
          {
              printf("Data Found %d ",i);
              found++;
              break;
         }
      }
      if(found==0)
        {
             printf("Data not Found");

         }
}

int main()
{

    int n,data;
    printf("Enter your Array size: ");
    scanf("%d",&n);
    printf("Enter your Array element: ");
    input_array(n);
    printf("Enter your Array element for Search :");
    scanf("%d",&data);
    linear_Search(n,data);



}
