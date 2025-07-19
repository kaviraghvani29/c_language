#include<stdio.h>

int main(){

int x,y, square;

printf("Enter value of x: ");
scanf("%d", &x);

printf("Enter value of y: ");
scanf("%d", &y);

square = x*x - 2*x*y + y*y;

printf("The value of x^2 - 2xy + y^2 is: %d\n", square);

return 0 ;

}