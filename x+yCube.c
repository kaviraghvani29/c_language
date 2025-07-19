#include<stdio.h>

int main(){

int x, y, cube;

printf("Enter value of a: ");
scanf("%d", &x);

printf("Enter value of b: ");
scanf("%d", &y);

cube = x*x*x + 3*x*x*y + 3*x*y*y + y*y*y;

printf("the value of (x+y) cube: %d", cube);

return 0;

}