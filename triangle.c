#include <stdio.h>

int main(){

int a, b, c;

printf("Enter first angle: ");
scanf("%d", &a);

printf("Enter second angle: ");
scanf("%d", &b);

c = 180 - (a + b);

printf("Third angle is: %d\n", c);

return 0;
}