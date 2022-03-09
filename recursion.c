#include<stdio.h>
int main(){
int n,r;
printf("enter the number: ");
scanf("%d",&n);
r = n*factorial(n-1);
printf("factorial of your number is %d",r);
return 0;
}
int factorial(n)
{
    int result;
    if(n==0)
    result = 1;
    else
    result = n*factorial(n-1);
    return result;

}