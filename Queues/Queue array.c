#include<stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int n) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue Overflow! No space to enqueue %d\n", n);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = n;
    printf("Enqueued item: %d\n", n);
}

int dequeue() {
    if (front == -1) {
        printf("Queue Underflow! No items to dequeue\n");
        return -1;
    }
    int val = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
    printf("Dequeued item: %d\n", val);
    return val;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % SIZE;
    }
    printf("%d\n", queue[i]);
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

