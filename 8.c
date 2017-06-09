#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main (int argc, char**argv)
{ 
float  a, b, c, X1, X2, delta; 
printf(“Enter the value a:”); 
scanf(“%f, &a”);
printf(“Enter the value b:”); 
scanf(“%f, &b”);
printf(“Enter the value c:”); 
scanf(“%f, &c”); 
delta=b*b-4*a*c; 
X1=(-b+sqrt(delta))/(2*a); 
X2=(-b-sqrt(delta))/(2*a); if(delta<0){ printf(“have’nt real roots”); 
}else{
 printf(“The value is X1: %.2fn”, X1);
 printf(“The value is X1: %.2fn”, X1); 
} 
system(“pause”); 
retorn 0;
}
