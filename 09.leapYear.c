/*Using ternary‟ operator, to check whether a given Year 
is a Leap Year or Not.*/
#include<stdio.h>
void main(){
    int year;
  printf("Enter The Year:\n");
scanf("%d",&year);
 (year%4==0 && year%100!=0)?printf("Given year Is Leap Year\n"):printf("Given year Is Not A Leap Year\n");
}