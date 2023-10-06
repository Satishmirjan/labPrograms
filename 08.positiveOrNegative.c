/*Using „ternary‟ operator, check whether a given 
number is Positive or Negative.*/
#include<stdio.h>

#include<stdio.h>
void main(){
    int number;
  printf("Enter The Number:\n");
scanf("%d",&number);
((number==0)?printf("Given Number Is Neither positive nor negative\n"):((number>0)?printf("Given Number Is positive\n"):printf("Given Number Is Negative")));

}