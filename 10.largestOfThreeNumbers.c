/*Using „ternary‟ operator, find the largest of three 
numbers.*/
#include<stdio.h>

void main(){
    int a,b,c;
   
printf("Enter The Numbers:\n");
scanf("%d%d%d",&a,&b,&c);
((a>b && a>c)?printf("%d is largest\n",a):((b>a && b>c)?printf("%d is largest\n",b):printf("%d is largest\n",c)));

}