/*To find the volume of a Sphere using the formula, 
Volume = 4 / 3 Π r*r*r */
#include<stdio.h>

void main(){
    int radius;
    float area_of_circle;
printf("Enter The Radius Of Circle:\n");
scanf("%d",&radius);
area_of_circle=(1.33*3.14*radius*radius*radius);
printf("Area Of The Given Circle : %f",area_of_circle);
}