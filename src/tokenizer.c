#include "tokenizer.h"
#include <stdlib.h>
#include <string.h>


Token* create_token(TokenType type, const char* text) {
    Token* token = (Token*)malloc(sizeof(Token));
    if (token == NULL) {
      
        return NULL;
    }
    token->type = type;
    token->text = strdup(text); 
    return token;
}


void free_token(Token* token) {
    if (token != NULL) {
        free(token->text);
        free(token);
    }
}


TokenType classify_token(const char* text) {

}


Token* get_next_token(FILE* stream) {
  
}
