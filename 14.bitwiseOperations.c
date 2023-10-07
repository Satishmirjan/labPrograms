/*To perform the following using bitwise operators:
c = a & b ; d = a | b ; e = ~a
f = a >> n; g = a << n; h = a ^ b*/
#include<stdio.h>

#include<stdio.h>
void main(){
    int a,b,c,d,e,f,g,h,n;
  printf("Enter The Value of a And b:\n");
scanf("%d%d",&a,&b);
c = a&b; 
d = a|b;
e = ~a;
h = a ^ b;
printf("a & b = %d \n a | b = %d \n  ~a = %d\n  a ^ b = %d\n",c,d,e,h);

 printf("Enter The Value Of n:\n");
 scanf("%d",&n);
 f = a >> n;
 g = a << n; 
printf(" a >> n = %d \n a << n = d\n",f,g);

}