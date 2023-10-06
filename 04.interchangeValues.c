/* Given the values of the variables x, y and z, write a 
program to rotate their values such that x has the value 
of y, y has the value of z, and z has the value of x*/
#include<stdio.h>

void main(){
    int x,y,z,temp;
   
printf("Enter The Values of x,y,z:\n");
scanf("%d%d%d",&x,&y,&z);
temp=x;
x=y;
y=z;
z=temp;
printf("value of x:%d \n y:%d \n z:%d",x,y,z);
}
