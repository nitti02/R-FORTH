#ifndef TOKEN_H
#define TOKEN_H

// Define token types
typedef enum {
    NUMBER,
    ADDITION,
    SUBTRACTION,
    MULTIPLICATION,
    DIVISION,
    WORD // Placeholder for words (e.g., function names)
} token_type_t;

// Define a token structure
typedef struct {
    token_type_t type; // Token type
    char *text;        // Token text
} token_t;

// Function declarations
token_t *create_token(token_type_t type, const char *text);
void free_token(token_t *token);

#endif /* TOKEN_H */
