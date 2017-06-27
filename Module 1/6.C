#include <stdio.h>
 
int main()
{
int fat, n;
printf("Enter a value for which you want to calculate your factorial: ");
scanf("%d", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nCalculated Factor: %d", fat);
return 0
}
