//write a program to find fibonacci of integer n using recursion
#include <stdio.h>
int fibonacci(int n) {
if (n==0) {
return 0; }
if (n==1) {
return 1; }
return fibonacci(n-1)+fibonacci(n-2);
}
int main() { 
int n,x;
printf("enter which number do u want the fibonacci to printed:");
scanf("%d",&n);
x=fibonacci(n);
printf("the fibonacci is %d",x);
printf("\nCH.SC.U4CSE24110");
}
