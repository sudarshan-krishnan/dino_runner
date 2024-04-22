// imports
#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

// Constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 400;
const int GROUND_HEIGHT = 50;

// Function to initialize SDL
bool init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    return true;
}

int main() {
    // Initialize SDL
    if (!init()) {
        return 1;
    }

    // Create the game window
    SDL_Window* window = SDL_CreateWindow("Chrome Dino Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Create the renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        printf("Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    // Load game assets (e.g., dino image)

    // Game loop
    bool running = true;
    while (running) {
        // Handle user input

        // Update game state

        // Render game objects
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        SDL_RenderClear(renderer);

        // Draw game objects (e.g., dino, obstacles, ground)

        SDL_RenderPresent(renderer);

        // Add a delay to achieve a consistent frame rate (you can use SDL_Delay function)
    }

    // Cleanup and quit SDL
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    return 0;
}
