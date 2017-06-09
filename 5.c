#include 
#include 
int main ()
{
float ftemp, ctemp;
printf("Enter temperature in degrees Celsius:\n");
scanf("%f", &ctemp);
ftemp=ctemp * 9/5 + 32;
printf("\n Temperature in degrees Fahrenheit e %2f\n", ftemp);
system ("pause");
return 0;
}
