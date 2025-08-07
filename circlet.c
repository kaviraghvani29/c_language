#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 41; j < 41 + i; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    int num = 11;
    for (int i = 1; i <= 4; i++) 
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }


    for (int i = 5; i >= 1; i--) {
        for (int k = 1; k < i; k++) {
            printf("  ");
        }
        for (int j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }


    for (int i = 5; i >= 1; i--) {
        for (int k = 5; k > i; k--) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j % 2);
        }
        printf("\n");
    }

    for (int i = 5; i >= 1; i--) {
        for (int k = 1; k < i; k++) {
            printf("  ");
        }
        for (int j = i; j <= 5; j++) {
            printf("%d ", j);
        }
        for (int j = 4; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

     for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        int spaces = (5 - i) * 2;
        for (int k = 1; k <= spaces; k++) {
            printf("  ");
        }
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

      for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 3) {
                printf("* ");
            } else if (i == 2 && (j == 1 || j == 5)) {
                printf("* ");
            } else if ((i == 4 || i == 5) && j == 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
