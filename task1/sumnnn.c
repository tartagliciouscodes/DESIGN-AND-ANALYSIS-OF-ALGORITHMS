//write a program to find sum of cubes first n natural numbers using function
#include <stdio.h>
int sum(int n) {
int sum=0,i;
for (i=1;i<=n;i++) {
sum+=(i*i*i);
}
printf("the sum of %d natural numbers are %d\n",n,sum);
}
int main() {
int n;
printf("enter till which natural number do u want the sum to printed:");
scanf("%d",&n);
sum(n);
printf("CH.SC.U4CSE24110");
}
