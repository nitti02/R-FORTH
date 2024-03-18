#include "int_stack.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_STACK_SIZE 100

// Definition of IntStack structure
struct IntStack {
    int items[MAX_STACK_SIZE];
    int top;
};

// Function to create a new integer stack
IntStack* create_int_stack() {
    IntStack* stack = (IntStack*)malloc(sizeof(IntStack));
    if (stack != NULL) {
        stack->top = -1; // Initialize top to -1 (empty stack)
    }
    return stack;
}

// Function to check if the integer stack is empty
int is_empty(IntStack* stack) {
    return stack->top == -1;
}

// Function to check if the integer stack is full
int is_full(IntStack* stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

// Function to push an item onto the integer stack
void push(IntStack* stack, int item) {
    if (!is_full(stack)) {
        stack->items[++stack->top] = item;
    } else {
        fprintf(stderr, "Error: Stack is full\n");
    }
}

// Function to pop an item from the integer stack
int pop(IntStack* stack) {
    if (!is_empty(stack)) {
        return stack->items[stack->top--];
