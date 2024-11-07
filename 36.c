#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {  
        printf("移動盤子 1 從 %c 到 %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);           
    printf("移動盤子 %d 從 %c 到 %c\n", n, from, to); 
    hanoi(n - 1, aux, to, from);           
}

int main() {
    int n ; 
    printf("請輸入盤子數量:");
    scanf("%d",&n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
