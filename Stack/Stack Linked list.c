#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int n) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack Overflow! No space to push %d\n", n);
        return;
    }
    newNode->data = n;
    newNode->next = top;
    top = newNode;
    printf("Pushed item: %d\n", n);
}

int pop() {
    if (top == NULL) {
        printf("Stack Underflow! No items to pop\n");
        return -1;
    }
    int val = top->data;
    struct Node* temp = top;
    top = top->next;
    free(temp);
    printf("Popped item: %d\n", val);
    return val;
}

void display() {
    struct Node* temp = top;
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    push(12);
    push(13);
    push(14);

    display();

    push(15);

    pop();
    pop();
    pop();

    pop();

    display();

    return 0;
}
