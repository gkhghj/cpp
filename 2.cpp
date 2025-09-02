#include <stdio.h>
#include <unistd.h> // 用于usleep函数

// 清屏函数，使用ANSI控制码
void clear_screen() {
    printf("\033[H\033[J");
}

// 打印火车，参数offset控制火车的水平位置
void print_train(int offset) {
    int i;
    
    // 打印火车顶部的烟
    for(i = 0; i < offset; i++) printf(" ");
    printf("    |\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("   /|\\\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("  / | \\\n");
    
    // 打印火车头
    for(i = 0; i < offset; i++) printf(" ");
    printf("  _____\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf(" |_____|--o\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("/|      |  \\\n");
    
    // 打印车厢
    for(i = 0; i < offset; i++) printf(" ");
    printf("| |______|  |\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("\\____________/\n");
    
    // 打印铁轨
    for(i = 0; i < offset - 5; i++) printf(" ");
    printf("=========================================\n");
}

int main() {
    int offset = 0;
    int direction = 1; // 1表示向右移动，-1表示向左移动
    
    // 循环创建动画效果
    while(1) {
        clear_screen();
        print_train(offset);
        
        // 控制火车移动方向和边界
        offset += direction;
        if(offset > 60) direction = -1;
        if(offset < 0) direction = -1;
        
        // 暂停一段时间，控制动画速度
        usleep(100000); // 100毫秒
    }
    
    return 0;
}
