#include <stdio.h>
#include <stdlib.h>
int main ()
{
 float R1, R2, R;
 printf("пиште первое число\n");
 scanf("%f", &R1);
 printf("пишите второе число\n");
 scanf("%f", &R2);
 R=(R1*R2)/(R1+R2);
 printf("R=%f\n", R);
return 0;
}
