#include "token.h"
#include <stdlib.h>
#include <string.h>

// Function to create a new token
struct token_t* create_token(enum token_type_t type, const char* text) {
    struct token_t* token = (struct token_t*)malloc(sizeof(struct token_t));
    if (token == NULL) {
        // Handle memory allocation failure
        return NULL;
    }
    token->type = type;
    token->text = strdup(text);
    return token;
}


void free_token(struct token_t* token) {
    if (token != NULL) {
        free(token->text);
        free(token);
    }
}


enum token_type_t classify_token(const char* text) {

}


struct token_t* get_next_token(FILE* stream) {
}
