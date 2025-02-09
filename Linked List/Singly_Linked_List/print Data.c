#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;

};

void print_data(struct node *head)
{

    if(head==NULL)
    {
        printf("Linked list is empty");

    }

    struct node *ptr=NULL;
        ptr=head;
    while(ptr!=NULL)
    {
      printf("%d ",ptr->data);

        ptr=ptr->next;
    }

}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_data(head);
}
