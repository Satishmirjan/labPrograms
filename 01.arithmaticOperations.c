/*To accept two numbers and perform basic arithmetic 
operations (+, - *, /, %)*/
#include<stdio.h>

void main(){
    int a,b;
printf("Enter Two Numbers:\n");
scanf("%d%d",&a,&b);
printf("%d+%d=%d\n",a,b,a+b);
printf("%d-%d=%d\n",a,b,a-b);
printf("%d*%d=%d\n",a,b,a*b);
printf("%d/%d=%d\n",a,b,a/b);
printf("%d%\%%d=%d\n",a,b,a%b);
}