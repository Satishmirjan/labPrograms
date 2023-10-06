/*To read floating-pointing number and then displays the 
right-most digit of the integral part of the number*/
#include<stdio.h>

void main(){
    int right_most_digit;
    float number;
    
printf("Enter The Number:\n");
scanf("%f",&number);

right_most_digit=(int)number%10;
printf("The Right Most Digit Of The Given Number:%d\n",right_most_digit);
}