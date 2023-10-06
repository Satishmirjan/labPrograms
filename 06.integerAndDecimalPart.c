/*To read floating-pointing number, separate and displays 
the integral and decimal part of the given.*/
#include<stdio.h>

void main(){
    int integer_part;
    float number,decimal_part;
    
printf("Enter The Number:\n");
scanf("%f",&number);

integer_part=number;
decimal_part=number-integer_part;
printf("The Integer Part Of The Given Number:%d\n",integer_part);
printf("The Decimal Part Of The Given Number:%f\n",decimal_part);
}