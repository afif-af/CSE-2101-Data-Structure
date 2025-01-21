#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

typedef struct Node node;
node* head = NULL;

void addToEmpty(int data)
{
    node* temp = malloc(sizeof(node));
    temp->data = data;
    temp->link = NULL;
    head = temp;
}

void addEnd(int data)
{
    node* p = head;
    node* newp = malloc(sizeof(node));
    newp->data = data;
    newp->link = NULL;

    while (p->link != NULL)
    {
        p = p->link;
    }
    p->link = newp;
}

void traversal()
{
    node* ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void deleteLast()
{
    node* temp =head;
    node* temp2 =NULL;

    if (temp !=NULL && temp->link==NULL)
    {
        free(temp);
        head = NULL;
        return;
    }
    while (temp->link != NULL)
    {
        temp2 = temp;
        temp = temp->link;
    }
    temp2->link = NULL;
    free(temp);
}

int main()
{
    addToEmpty(10);
    addEnd(20);
    addEnd(30);
    addEnd(40);
    addEnd(50);

    printf("Original List: ");
    traversal();
    deleteLast();
    printf("\nafter deleting: ");
    traversal();

    return 0;
}
