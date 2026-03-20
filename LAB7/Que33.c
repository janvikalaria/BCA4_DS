#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

/* PUSH operation */
void push() {
    int item;
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("Element pushed successfully\n");
    }
}

/* POP operation */
void pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

/* DISPLAY operation */
void display() {
    int i;
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peep() {
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

void change() {
    int pos, item;
    if (top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Enter position to change (1 to %d): ", top + 1);
        scanf("%d", &pos);
        if (pos < 1 || pos > top + 1) {
            printf("Invalid position\n");
        } else {
            printf("Enter new element: ");
            scanf("%d", &item);
            stack[pos - 1] = item;
            printf("Element changed successfully\n");
        }
    }
}

/* Main function */
int main() {
    int choice;

    while (1) {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
