// Evaluates arithmetic expresions in Reverse Polish Notation (RPN)

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void begin(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
    char ch;

    begin();

    while (scanf(" %c", &ch), ch != 'q') {
        if (ch == '=') {
            printf("Value of the expression: %d\n", pop());
            begin();
        }
        else if (isdigit(ch))
            push(ch - '0');
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int b = pop();
            int a = pop();

            switch (ch) {
            case '+':
                push(a + b);
                break;
            case '-':
                push(a - b);
                break;
            case '*':
                push(a * b);
                break;
            case '/':
                push(a / b);
                break;
            }
        }
        else {
            printf("Invalid expression.\n");
            begin();
        }
    }
}

void begin(void) {
    make_empty();
    printf("Enter an RPN expression: ");
}

void make_empty(void) { top = 0; }

bool is_empty(void) { return top == 0; }

bool is_full(void) { return top == STACK_SIZE; }

void push(int i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("Expression is too complicated.\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("Not enough operands in expression.\n");
    exit(EXIT_FAILURE);
}