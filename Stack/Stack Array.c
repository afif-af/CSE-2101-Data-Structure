#include<stdio.h>
#define SIZE 10

int stack[SIZE];
int top = -1;

void push(int n) {
    if (top < SIZE - 1) {
        top = top + 1;
        stack[top] = n;
        printf("Pushed item: %d\n", n);
    } else {
        printf("Stack Overflow! No space to push %d\n", n);
    }
}

int pop() {
    if (top >= 0) {
        int val = stack[top];
        top = top - 1;
        printf("Popped item: %d\n", val);
        return val;
    } else {
        printf("Stack Underflow! No items to pop\n");
        return -1;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
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
