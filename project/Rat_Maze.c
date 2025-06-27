#include <stdio.h>
#include <stdlib.h>
#include <SDL3/SDL.h>

#define n 7

void Rat_maze(int i, int j);
void run_gui();
void draw_maze(SDL_Renderer* renderer);
void draw_path(SDL_Renderer* renderer);

int maze[n][n] = {
    {1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0, 1, 0},
    {0, 0, 0, 1, 0, 1, 1},
    {0, 1, 1, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 1, 1}
};

int path = 0;
int found = 0;
int sol[2][n * n];

int main() {
    Rat_maze(0, 0);
    if (found) {
        printf("Path from (0,0) to (%d,%d):\n", n - 1, n - 1);
        for (int i = 0; i < path; i++) {
            printf("(%d,%d) ", sol[0][i], sol[1][i]);
        }
        printf("\n");
        run_gui();
    } else {
        printf("No path found!\n");
    }
    return 0;
}

void Rat_maze(int i, int j) {
    if (i == n - 1 && j == n - 1) {
        sol[0][path] = i;
        sol[1][path] = j;
        path++;
        found = 1;
        return;
    }

    maze[i][j] = 0;
    sol[0][path] = i;
    sol[1][path] = j;
    path++;

    if (j < n - 1 && maze[i][j + 1] == 1)
        Rat_maze(i, j + 1);
    if (i < n - 1 && maze[i + 1][j] == 1)
        Rat_maze(i + 1, j);
    if (j > 0 && maze[i][j - 1] == 1)
        Rat_maze(i, j - 1);
    if (i > 0 && maze[i - 1][j] == 1)
        Rat_maze(i - 1, j);

    if (!found) {
        path--;
        maze[i][j] = 1;
    }
}

void run_gui() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return;
    }

    SDL_Window* window = SDL_CreateWindow("Rat Maze", 640, 640, 0);
    if (!window) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
    if (!renderer) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return;
    }

    int running = 1;
    SDL_Event e;

    while (running) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT)
                running = 0;
        }

        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);  // white background
        SDL_RenderClear(renderer);

        draw_maze(renderer);
        draw_path(renderer);

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void draw_maze(SDL_Renderer* renderer) {
    float cell_size = 640.0f / n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            SDL_FRect cell = { j * cell_size, i * cell_size, cell_size, cell_size };

            if (maze[i][j] == 0) {
                SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);  // black walls
                SDL_RenderFillRect(renderer, &cell);
            }

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);  // cell border
            SDL_RenderRect(renderer, &cell);
        }
    }
}

void draw_path(SDL_Renderer* renderer) {
    float cell_size = 640.0f / n;
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  // red path
    for (int i = 0; i < path; i++) {
        SDL_FRect cell = { sol[1][i] * cell_size, sol[0][i] * cell_size, cell_size, cell_size };
        SDL_RenderFillRect(renderer, &cell);
    }
}
