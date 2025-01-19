#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int n) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Queue Overflow! No space to enqueue %d\n", n);
        return;
    }
    newNode->data = n;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued item: %d\n", n);
}

int dequeue() {
    if (front == NULL) {
        printf("Queue Underflow! No items to dequeue\n");
        return -1;
    }
    int val = front->data;
    struct Node* temp = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
    printf("Dequeued item: %d\n", val);
    return val;
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    enqueue(12);
    enqueue(13);
    enqueue(14);

    display();

    enqueue(15);

    dequeue();
    dequeue();
    dequeue();

    dequeue();

    display();

    return 0;
}

