// Evaluates an expression left to right (no operator precedence).

#include <stdio.h>

int main(void) {
    float result, num;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while ((op = getchar()) != '\n') {
        scanf("%f", &num);

        if (op == '+')
            result += num;
        else if (op == '-')
            result -= num;
        else if (op == '*')
            result *= num;
        else if (op == '/')
            result /= num;
        else {
            printf("Invalid expression.\n");
            return 1;
        }
    }

    printf("Value of expression: %f\n", result);
}