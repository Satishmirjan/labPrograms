/* Using „&‟ operator, check whether a given number is 
Odd or Even.*/

#include<stdio.h>
void main(){
    int number;
  printf("Enter The Number:\n");
scanf("%d",&number);
(number&1==1)?printf("Given Number Is Odd\n"):printf("Given Number Is Even\n");

}