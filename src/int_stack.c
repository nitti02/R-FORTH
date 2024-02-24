#include "int_stack.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_STACK_SIZE 100

struct IntStack {
    int items[MAX_STACK_SIZE]; 
    int top; 
};

IntStack* create_int_stack() {
    IntStack* stack = (IntStack*)malloc(sizeof(IntStack));
    if (stack != NULL) {
        stack->top = -1; 
    }
    return stack;
}

int is_empty(IntStack* stack) {
    return stack->top == -1;
}

int is_full(IntStack* stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

void push(IntStack* stack, int item) {
    if (!is_full(stack)) {
        stack->items[++stack->top] = item; 
    } else {
        fprintf(stderr, "Error: Stack is full\n");
    }
}

int pop(IntStack* stack) {
    if (!is_empty(stack)) {
        return stack->items[stack->top--];
    } else {
        fprintf(stderr, "Error: Stack is empty\n");
        return 0;
    }
}

void over(IntStack* stack) {
    if (stack->top >= 1) {
        push(stack, stack->items[stack->top - 1]);
    } else {
  
