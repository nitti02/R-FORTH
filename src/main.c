#include <stdio.h>
#include <stdlib.h>
#include "token.h" // Include the header file for token handling

int main() {
    char* input_line = NULL;
    size_t input_line_len = 0;
    ssize_t read;
  
    printf("Enter your FORTH program:\n");

   
    while ((read = getline(&input_line, &input_line_len, stdin)) != -1) {
   
        free(input_line);
        input_line = NULL;
        input_line_len = 0;
    }

  
    free(input_line);
    return 0;
}
