#include <stdio.h>

int main(void) {
    char ch = 'a';
    printf("Output: ");

    do {
        printf("%c", ch);
        ch = ch + 4;        
        if (ch <= 'z')      
            printf(", ");
    } while (ch <= 'z');

    return 0;
}
