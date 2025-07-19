#include<stdio.h>

int main(){

char grade;
int score;

printf("Enter your score(0-100): ");
scanf("%d", &score);

grade = (score>=90) ? 'A':
        (score>=80) ? 'B':
        (score>=70) ? 'C':
        (score>=60) ? 'D':
        (score>=50) ? 'E':
                      'F';

printf("Your grade is: %c\n", grade);

switch(grade)
{
case'A':
    printf("Excellent work!\n");
    break;
case'B':
    printf("Well done!\n");
    break; 
case'C':
    printf("Good job!\n");
    break;  
case'D':
    printf("Need improvemnt!\n");
    break;
case'E':
    printf("You passed!\n");
    break; 
case'F':
    printf("Fails!\n");
    break; 
}   

if(grade != 'F')
{
    printf("Congratulations! You are eligible for next level.");
}
else 
{
    printf("Please try again next time.\n");
}

}       