// game.c
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    // 初始化 SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL初始化失败: %s\n", SDL_GetError());
        return 1;
    }
    
    // 创建窗口
    SDL_Window* window = SDL_CreateWindow("我的第一个SDL2程序",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        800, 600, SDL_WINDOW_SHOWN);
    
    if (!window) {
        printf("窗口创建失败: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    
    // 创建渲染器
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 
        SDL_RENDERER_ACCELERATED);
    
    if (!renderer) {
        printf("渲染器创建失败: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    
    printf("程序已启动！\n");
    printf("按 ESC 键退出程序\n");
    printf("窗口应该显示为黑色背景\n");
    
    // 主循环
    bool running = true;
    while (running) {
        SDL_Event event;
        
        // 处理事件
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
            if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_ESCAPE) {
                    running = false;
                }
            }
        }
        
        // 清屏为黑色
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // 黑色
        SDL_RenderClear(renderer);
        
        // 绘制一个红色矩形
        SDL_Rect rect = {100, 100, 200, 150};
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // 红色
        SDL_RenderFillRect(renderer, &rect);
        
        // 更新屏幕
        SDL_RenderPresent(renderer);
        
        // 稍微延迟，减少CPU占用
        SDL_Delay(16); // 约60FPS
    }
    
    // 清理资源
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    printf("程序正常退出！\n");
    return 0;
}
