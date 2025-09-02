#include <stdio.h>
#include <unistd.h> // ����usleep����

// ����������ʹ��ANSI������
void clear_screen() {
    printf("\033[H\033[J");
}

// ��ӡ�𳵣�����offset���ƻ𳵵�ˮƽλ��
void print_train(int offset) {
    int i;
    
    // ��ӡ�𳵶�������
    for(i = 0; i < offset; i++) printf(" ");
    printf("    |\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("   /|\\\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("  / | \\\n");
    
    // ��ӡ��ͷ
    for(i = 0; i < offset; i++) printf(" ");
    printf("  _____\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf(" |_____|--o\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("/|      |  \\\n");
    
    // ��ӡ����
    for(i = 0; i < offset; i++) printf(" ");
    printf("| |______|  |\n");
    
    for(i = 0; i < offset; i++) printf(" ");
    printf("\\____________/\n");
    
    // ��ӡ����
    for(i = 0; i < offset - 5; i++) printf(" ");
    printf("=========================================\n");
}

int main() {
    int offset = 0;
    int direction = 1; // 1��ʾ�����ƶ���-1��ʾ�����ƶ�
    
    // ѭ����������Ч��
    while(1) {
        clear_screen();
        print_train(offset);
        
        // ���ƻ��ƶ�����ͱ߽�
        offset += direction;
        if(offset > 60) direction = -1;
        if(offset < 0) direction = -1;
        
        // ��ͣһ��ʱ�䣬���ƶ����ٶ�
        usleep(100000); // 100����
    }
    
    return 0;
}
