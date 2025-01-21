#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void insertAtBeginning(struct node** head, int data) {
    struct node* newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->link = *head;
    *head = newNode;
}

void printList(struct node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;

    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    printf("linked list inserting: ");
    printList(head);

    insertAtBeginning(&head, 5);

    printf("after inserting : ");
    printList(head);

    return 0;
}
