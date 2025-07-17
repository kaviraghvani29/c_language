#include <stdio.h>

int main(){

float base, HRA, DA, TA, gross;

printf("Enter base salary: ");
scanf("%f", &base);

HRA = base * 0.10f;
DA = base * 0.05f;
TA = base * 0.08f;

gross= base + HRA + DA + TA;

printf("Gross salary is: %f\n", gross);

return 0 ;

}