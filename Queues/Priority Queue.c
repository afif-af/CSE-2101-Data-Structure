#include <stdio.h>
#define SIZE 10

int queue[SIZE];
int priority[SIZE];
int front = -1;
int rear = -1;

void enqueue(int data, int prio) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow! No space to enqueue %d\n", data);
        return;
    }

    if (front == -1) {
        front = 0;
    }
    int i;
    rear++;

    for (i=rear-1;i>=front;i--) {
        if (priority[i] > prio) {
            queue[i + 1]=queue[i];
            priority[i + 1]=priority[i];
        } else {
            break;
        }
    }

    queue[i+1]=data;
    priority[i+1]=prio;
    printf("Enqueued item: %d with priority: %d\n",data,prio);
}

int dequeue() {
    if (front ==-1||front>rear) {
        printf("Queue Underflow! No items to dequeue\n");
        return -1;
    }

    int val = queue[front];
    printf("Dequeued item: %d\n",val);
    front++;
    if (front>rear) {
        front=rear=-1;
    }
    return val;
}

void display() {
    if (front==-1||front>rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i=front;i<= rear;i++) {
        printf("(%d,%d)",queue[i],priority[i]);
    }
    printf("\n");
}

int main() {
    enqueue(12, 2);
    enqueue(13, 1);
    enqueue(14, 3);

    display();

    enqueue(15, 0);

    dequeue();
    dequeue();
    dequeue();

    dequeue();

    display();

    return 0;
}
