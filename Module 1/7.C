#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <conio.h>
int main(){
    do{
        float num1, num2, result;
        char op;
        num1 = num2 = result;
        printf("[0] = Quit the program\n");
        printf("[1] = Sum\n");
        printf("[2] = Subtraction\n");
        printf("[3] = Multiplication\n");
        printf("[4] = Division\n"); 
        printf("[5] = Percentage\n"); 
        printf("[6] = Power\n");
        printf("inform operation \t >> ");
        op = getch();
        printf("Enter de first number: ");
        scanf("%f\n\n", &num1);
       printf("Enter de first number: ");
        scanf("%f\n\n", &num2);
        if(op == '1')
        {
            result = num1+num2;
            printf("%f", result);
        }else{
            if(op == '2'){
                result= num1-num2;
        }else{
                if(op=='3'){
                    result = num1*num2;
                }else{
            if(op=='4'){
                result = num1/num2;
                } else{
            if(op=='5'){
                result = pow(num1,num2);
                } else{
            if(op=='6'){
                result = (num2/100)*num1;
                 }
                   }
                 }
            }
        }
    }
    return 0;
}
