// Checks if a series parentheses and/or braces are properly nested.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
    char ch;
    bool is_correct = true, is_done = false;

    printf("Enter parantheses and/or braces: ");

    while (!is_done && is_correct) {
        switch (ch = getchar()) {
        case '(':
        case '{':
            push(ch);
            break;
        case ')':
            if (is_empty() || pop() != '(')
                is_correct = false;
            break;
        case '}':
            if (is_empty() || pop() != '{')
                is_correct = false;
            break;
        case '\n':
            if (!is_empty())
                is_correct = false;
            is_done = true;
            break;
        }
    }

    if (is_correct)
        printf("Parantheses/braces are nested properly.\n");
    else
        printf("Parantheses/braces are NOT nested properly.\n");
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(char i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("Stack underflow\n");
    exit(EXIT_FAILURE);
}