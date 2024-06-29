#include <stdio.h>
#define N 5

int stack[N];
int top = -1;

// Function to push an element onto the stack
void push() {
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == N - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = x;
        printf("Pushed %d onto the stack\n", x);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        int item = stack[top];
        top--;
        printf("Popped item is %d\n", item);
    }
}

// Function to display the top element of the stack
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("The top data is %d\n", stack[top]);
    }
}

// Function to display all elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
