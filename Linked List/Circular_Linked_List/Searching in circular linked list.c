#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}

void insertAtEnd(struct node** head, int data) {
    struct node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

int searchElement(struct node* head, int value) {
    if (head == NULL) {
        return 0;
    }

    struct node* temp = head;
    do {
        if (temp->data == value) {
            return 1;
        }
        temp = temp->next;
    } while (temp != head);

    return 0;
}

void traverseList(struct node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct node* temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main() {
    struct node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    traverseList(head);

    int value = 20;
    if (searchElement(head, value)) {
        printf("Element %d found in the circular linked list.\n", value);
    } else {
        printf("Element %d not found in the circular linked list.\n", value);
    }

    value = 50;
    if (searchElement(head, value)) {
        printf("Element %d found in the circular linked list.\n", value);
    } else {
        printf("Element %d not found in the circular linked list.\n", value);
    }

    return 0;
}
