#include <stdio.h>
#include <ctype.h>


char changeCase(char ch) {
    if (isupper(ch))
        return tolower(ch);
    else if (islower(ch))
        return toupper(ch);
    return ch;
}

int main() {
    char ch;
    printf("請輸入一個字母: ");
    scanf(" %c", &ch);
    printf("原字母: %c, 變更後的字母: %c\n", ch, changeCase(ch));

    return 0;
}
