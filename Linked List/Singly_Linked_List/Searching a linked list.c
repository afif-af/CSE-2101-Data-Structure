#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int search(struct node* head, int key) {
    struct node* current = head;
    int position = 0;

    while (current != NULL) {
        if (current->data == key) {
            return position;
        }
        current = current->link;
        position++;
    }
    return -1;
}


void print(struct node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node* second = malloc(sizeof(struct node));
    second->data = 20;
    head->link = second;

    struct node* third = malloc(sizeof(struct node));
    third->data = 30;
    second->link = third;
    third->link = NULL;

    printf("Linked List: ");
    print(head);

    int element = 20;
    int result = search(head, element);
    if (result != -1) {
        printf("Element %d found at position %d\n", element, result);
    } else {
        printf("Element %d not found\n", element);
    }

    return 0;
}
