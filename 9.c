#include<stdio.h>
#include<conio.h>

double fibonacci (int n)
{
    int a=1,b=1,x,i;
    if(n==1) x=a;
    if(n==2) x=b;
    for(i=3;i<=n;i++){
    x=a+b;
    a=b;
    b=x;
}
    return x;

int main()
{
    int x,n;
    printf("\n Type in the last word: ");
    scanf("%d",&n);
    x=fibonacci(n);
    printf("\n\n%d\n",x);
    system ("pause");
    return 0;
}
