#include <stdio.h>

int main(void)
{
    float num;
    int choice;

    printf("選択してください\n");
    printf("1: フィートからメートルへ、2: メートルからフィートへ\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("何フィート? ");
        scanf("%f", &num);
        printf("メートル: %f", num / 3.28);
    } else if (choice == 2) {
        printf("何メートル? ");
        scanf("%f", &num);
        printf("フィート: %f", num * 3.28);
    } else {
        printf("1か2を選択してください");
    }
    
    return 0;
}
