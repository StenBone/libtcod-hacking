#include "libtcod.hpp"
#include "SDL.h"

const int CONSOLE_WIDTH = 40;
const int CONSOLE_HEIGHT = 40;

int main() {

    TCOD_ContextParams contextParams = {};
    //contextParams.sdl_window_flags = SDL_WindowFlags::SDL_WINDOW_BORDERLESS;
    contextParams.columns = CONSOLE_WIDTH;
    contextParams.rows = CONSOLE_HEIGHT;
    contextParams.window_title = "libtcod-hacking";
    tcod::ContextPtr contextPtr = tcod::new_context(contextParams);
    tcod::ConsolePtr consolePtr = tcod::new_console(CONSOLE_WIDTH, CONSOLE_HEIGHT);

    while (true) {

        SDL_Event event = {};
        while (SDL_PollEvent(&event)) {

            if (event.type == SDL_QUIT) {
                TCOD_quit();
                return 0;
            }
            
            switch (event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                TCOD_quit();
                return 0;
                break;
            case SDLK_w:
                break;
            case SDLK_s:
                break;
            case SDLK_a:
                break;
            case SDLK_d:
                break;
            default:
                break;
            } 
        }
    }
   return 0;
}