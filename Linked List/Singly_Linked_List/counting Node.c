#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;

};

void count_of_nodes(struct node *head)
{
    int count=0;

    if(head==NULL)
    {
        printf("Linked list is empty");

    }

    struct node *ptr=NULL;
        ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    printf("%d",count);

}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // Allocate memory
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    // Assign values and link nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;


  count_of_nodes(head);
}
