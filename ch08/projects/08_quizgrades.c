// Prints the average and total scores for student grades across different quizzes.

#include <limits.h>
#include <stdio.h>

#define N 5

int main(void) {
    int grades[N][N];
    float averages[N];
    int highs[N], lows[N];

    for (int row = 0; row < N; ++row) {
        printf("Enter scores of student %d: ", row + 1);

        for (int col = 0; col < N; ++col)
            scanf("%d", &grades[row][col]);
    }

    printf("\nStudent totals:");

    for (int row = 0; row < N; ++row) {
        int sum = 0;

        for (int col = 0; col < N; ++col)
            sum += grades[row][col];

        averages[row] = (float)sum / N;
        printf(" %d", sum);
    }

    printf("\nStudent averages:");

    for (int i = 0; i < N; ++i)
        printf(" %.1f", averages[i]);

    printf("\nQuiz averages:");

    for (int col = 0; col < N; ++col) {
        int sum = 0;
        highs[col] = INT_MIN;
        lows[col] = INT_MAX;

        for (int row = 0; row < N; ++row) {
            int grade = grades[row][col];
            sum += grade;

            if (grade > highs[col])
                highs[col] = grade;

            if (grade < lows[col])
                lows[col] = grade;
        }

        printf(" %.1f", (float)sum / N);
    }

    printf("\nQuiz high scores:");

    for (int i = 0; i < N; ++i)
        printf(" %d", highs[i]);

    printf("\nQuiz low scores:");

    for (int i = 0; i < N; ++i)
        printf(" %d", lows[i]);

    printf("\n");
}