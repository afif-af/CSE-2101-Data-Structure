#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void insertAtEnd(struct node** head, int data) {
    struct node* newNode = malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = data;
    newNode->link = NULL;

    if (*head == NULL) {

        *head = newNode;
        return;
    }

    struct node* temp = *head;
    while (temp->link != NULL) {
        temp = temp->link;
    }

    temp->link = newNode;
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

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    printf("linked list is: ");
    printList(head);

    insertAtEnd(&head, 40);

    printf("after inserting: ");
    printList(head);

    return 0;
}
