// Sorts an array with Selection Sort.

#include <stdio.h>

void selection_sort(int[], int);

int main(void) {
    int n = 0, number;
    int numbers[1000];
    char ch;

    printf("Enter a series of integers: ");
    while (scanf("%d%c", &number, &ch) == 2) {
        numbers[n++] = number;

        if (ch == '\n')
            break;
    }

    selection_sort(numbers, n);

    printf("Sorted: ");
    for (int i = 0; i < n; ++i)
        printf("%d ", numbers[i]);
    printf("\n");
}

void selection_sort(int numbers[], int n) {
    if (n <= 1)
        return;

    int max_index = 0;

    for (int i = 1; i < n; ++i) {
        if (numbers[i] > numbers[max_index])
            max_index = i;
    }

    if (max_index != n - 1) {
        int max = numbers[max_index];
        numbers[max_index] = numbers[n - 1];
        numbers[n - 1] = max;
    }

    selection_sort(numbers, n - 1);
}