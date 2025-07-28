#include <stdio.h>

int main() {
    int num, first, last;

    do 
    {
        printf("Enter a positive number: ");
        scanf("%d", &num);
    } 
    while (num <= 0);

    last = num % 10;

    while (num >= 10) 
    {
        num = num / 10;
    }
    first = num;

    printf("first digit = %d\n", first);
    printf("last digit = %d\n", last);
    printf("Sum of first and last digit = %d\n", first + last);

    return 0;
}
