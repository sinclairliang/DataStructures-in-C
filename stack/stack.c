/*
 * C program to implement stack. Stack is a LIFO data structure.
 * Stack operations: PUSH(insert operation), POP(Delete operation)
 * and Display stack.
 */


#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int top;
    unsigned capacity;
    int *array;
};


struct Stack *createStack(unsigned capacity) {
    struct Stack *stack = (struct Stack *) malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int *) malloc(stack->capacity * sizeof(int));
    return stack;
};

int isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

void push(struct Stack *stack, int item) {
    if (isFull(stack)) {
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to the stack\n", item);
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->array[stack->top--];
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        return INT_MIN;
    }
    return stack->array[stack->top];
}

void printStack(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty");
    } else {
        printf("Stack: ");
        for (int i = stack->top; i >= 0; i--) {
            printf("%d ", stack->array[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack *stack = createStack(100);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    printStack(stack);
    pop(stack);
    pop(stack);
    printStack(stack);
    return 0;
}