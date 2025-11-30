//write a program to find factorial of integer n using recursion
#include <stdio.h>
int factorial(int n) {
if (n==1) {
return 1; }
return n*factorial(n-1);
}
int main() {
int n,x;
printf("enter till which natural number do u want the factorial to printed:");
scanf("%d",&n);
x=factorial(n);
printf("the factorial is %d",x);
printf("\nCH.SC.U4CSE24110");
}
