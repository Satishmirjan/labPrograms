/*To find the area of a Triangle with 3 sides given using 
formula, Area = √(s(s-a) (s-b) (s-c)) 
where a, b and c are lengths of sides of Triangle, and
s = (a+b+c) / 2*/

#include<stdio.h>
#include<math.h>

void main(){
    int a,b,c;
    float area_of_traingle,s;
printf("Enter The Sides of Triangle:\n");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
area_of_traingle=sqrt(s*(s-a)*(s-b)*(s-c));

printf("Area Of The Given Triangle : %f",area_of_traingle);
}