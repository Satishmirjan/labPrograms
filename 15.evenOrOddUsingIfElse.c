/*To determine whether a given number is „Odd‟ or 
„Even‟ and print the message NUMBER IS EVEN or 
NUMBER IS ODD with and without using „else‟
statement.*/
#include<stdio.h>
void main(){
    int number;
  printf("Enter The Number:\n");
scanf("%d",&number);
//without using else
 (number&1==1)?printf("Given Number Is Odd\n"):printf("Given Number Is Even\n");

 
 //with using else
  if(number&1==1){
    
    printf("Given Number Is Odd\n");
 }
 else{
    printf("Given Number Is Even\n");

 }

}