#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

void insertion(struct node* head, int data) {
    struct node* ptr = head;
    struct node* temp = (struct node*)malloc(sizeof(struct node));

    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void print(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    head->data = 10;
    head->link = NULL;

    struct node* current = malloc(sizeof(struct node));
    if (current == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    current->data = 20;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 30;
    head->link->link = current;

    head->link->link->link = current;
    head->link->link->link->link = NULL;

    insertion(head, 40);
    print(head);

    return 0;
}
