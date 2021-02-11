/*
 * @author: Batchema Sombie
 * token.h: header file for token.c
 * A suite of functions to read
 * and manipulate j-language tokens
 *
 * UPENN CIS 240 HW9
 */

#define MAX_TOKEN_LENGTH 250

#include <stdio.h>

typedef struct {
  enum {
    DEFUN,
    IDENT,
    RETURN,
    PLUS,
    MINUS,
    MUL,
    DIV,
    MOD,
    AND,
    OR,
    NOT,
    LT,
    LE,
    EQ,
    GE,
    GT,
    IF,
    ELSE,
    ENDIF,
    DROP,
    DUP,
    SWAP,
    ROT,
    ARG,
    LITERAL,
    BROKEN_TOKEN,
    NONE
  } type;
  int literal_value; // this field used to store the value of literal tokens
  int arg_no; // this field used to store the index of argument literals argN
  char str[MAX_TOKEN_LENGTH];
} token;

// line_number : You can use this to keep track of the current line number which
// can be useful in reporting syntax errors.
extern int line_number;

// Extra functions which you may wish to define and use , or not
const char *token_type_to_string(int type);

void print_token(token *theToken);

/*
 * Create a new token
 */
token *create_token();

/*
 * delete token
 */
void delete_token(token *token);

/*
 * Transform a line to tokens and append to list
 */
int lines_to_tokens(char *tokenLines, token **tokensArray, int index);

/*
 * Extract Token from word
 */
token *extract_token(char *word);

/*
 * Read all tokens from a file input
 */
int read_all_tokens(token **tokensArray, FILE *inputFile);
