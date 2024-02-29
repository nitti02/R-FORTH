#include <stdlib.h>
#include <string.h>
#include "token.h"

// Function to create a new token
token_t *create_token(token_type_t type, const char *text) {
    token_t *token = malloc(sizeof(token_t));
    if (token != NULL) {
        token->type = type;
        token->text = strdup(text); // Duplicate the input text to ensure ownership
    }
    return token;
}

// Function to free memory allocated for a token
void free_token(token_t *token) {
    if (token != NULL) {
        free(token->text); // Free the duplicated text
        free(token);       // Free the token structure
    }
}
