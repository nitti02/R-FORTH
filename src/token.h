#ifndef TOKEN_H
#define TOKEN_H

#include <stdio.h> 


enum token_type_t {
    NUMBER,
    OPERATOR,
    SYMBOL,
    WORD
};


struct token_t {
    enum token_type_t type; 
    char* text;
};


struct token_t* create_token(enum token_type_t type, const char* text);
void free_token(struct token_t* token);
enum token_type_t classify_token(const char* text);
struct token_t* get_next_token(FILE* stream);

#endif 
