#include<stdio.h>

int main(){

int x, y, z;

printf("with var.");
printf("Enter value of x: ");
scanf("%d", &x);

printf("Enter value of y: ");
scanf("%d", &y);

printf("Before swap: x = %d\n, y = %d\n", x,y);

z = x;
x = y;
y = z;

printf("After swap: x = %d\n, y = %d\n", x,y);

printf("without var.");

printf("Before swap: x = %d\n, y = %d\n", x,y);

x = x+y;
y = x-y;
x = x-y;

printf("After swap: x = %d\n, y = %d\n", x,y);


}