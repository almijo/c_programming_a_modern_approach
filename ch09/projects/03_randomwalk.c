// Random walk across a two-dimensional array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void) {
    srand(time(NULL));

    char grid[N][N];
    generate_random_walk(grid);
    print_array(grid);
}

void generate_random_walk(char walk[N][N]) {
    int x, y;
    int directions[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    // init grid with empty cells
    for (y = 0; y < N; ++y)
        for (x = 0; x < N; ++x)
            walk[y][x] = '.';

    // init start position
    x = rand() % N;
    y = rand() % N;
    char letter = 'A';
    walk[y][x] = letter;

    int neighbors[4][2];
    int valid_neighbors_count;

    do {
        valid_neighbors_count = 0;

        // determine valid neighbors and count them
        for (int dir = 0; dir < 4; ++dir) {
            int neighbor_x = x + directions[dir][0];
            int neighbor_y = y + directions[dir][1];

            if (neighbor_x >= 0 && neighbor_x < N && neighbor_y >= 0 && neighbor_y < N &&
                walk[neighbor_y][neighbor_x] == '.') {
                neighbors[valid_neighbors_count][0] = neighbor_x;
                neighbors[valid_neighbors_count][1] = neighbor_y;
                ++valid_neighbors_count;
            }
        }

        // if there are valid neighbors pick a random one
        if (valid_neighbors_count > 0) {
            int n = rand() % valid_neighbors_count;
            x = neighbors[n][0];
            y = neighbors[n][1];
            walk[y][x] = ++letter;
        }
    } while (letter < 'Z' && valid_neighbors_count > 0);
}

void print_array(char walk[N][N]) {
    for (int y = 0; y < N; ++y) {
        for (int x = 0; x < N; ++x)
            printf("%c ", walk[y][x]);

        printf("\n");
    }
}