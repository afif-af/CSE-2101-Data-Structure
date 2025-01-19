#include <stdio.h>
#define SIZE 100

int deque[SIZE];
int front = -1;
int rear = -1;

int isEmpty() {
    return (front == -1);
}

int isFull() {
    return ((front ==0&&rear ==SIZE-1)||(rear==front-1));
}

void insertFront(int n) {
    if (isFull()) {
        printf("Deque Overflow! Cannot insert %d\n", n);
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = SIZE - 1;
    } else {
        front=front-1;
    }
    deque[front] = n;
    printf("Inserted %d at the front\n", n);
}

void insertRear(int n) {
    if (isFull()) {
        printf("Deque Overflow! Cannot insert %d\n", n);
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else if (rear == SIZE - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = n;
    printf("Inserted %d at the rear\n", n);
}

void deleteFront() {
    if (isEmpty()) {
        printf("Deque Underflow! No elements to delete from the front\n");
        return;
    }

    int val = deque[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
    printf("Deleted %d from the front\n", val);
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque Underflow! No elements to delete from the rear\n");
        return;
    }

    int val = deque[rear];
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = SIZE - 1;
    } else {
        rear = rear - 1;
    }
    printf("Deleted %d from the rear\n", val);
}

void display() {
    if (isEmpty()) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");
    if (front <= rear) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", deque[i]);
        }
    } else {
        for (int i=front; i < SIZE; i++) {
            printf("%d ", deque[i]);
        }
        for (int i=0; i<= rear; i++) {
            printf("%d ", deque[i]);
        }
    }
    printf("\n");
}

int main() {
    insertRear(12);
    insertRear(13);
    insertRear(14);
    display();

    insertFront(11);
    insertFront(10);
    display();

    deleteFront();
    deleteRear();
    display();

    return 0;
}
