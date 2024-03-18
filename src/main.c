#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "token.h"

#define MAX_LINE_LENGTH 256

int perform_operation(int operand1, int operand2, token_type_t operator_type) {
    switch (operator_type) {
        case ADDITION:
            return operand1 + operand2;
        case SUBTRACTION:
            return operand1 - operand2;
        case MULTIPLICATION:
            return operand1 * operand2;
        case DIVISION:
            if (operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                exit(EXIT_FAILURE);
            }
        default:
            printf("Error: Unknown operator\n");
            exit(EXIT_FAILURE);
    }
}

int main() {
    char *line = NULL;
