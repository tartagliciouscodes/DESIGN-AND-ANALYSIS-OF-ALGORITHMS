//write a program to find transposing 3x3 matrix
#include <stdio.h>
int main() { 
int i,j,r1,c1;
printf("enter value for row and column of matrix 1:");
scanf("%d %d",&r1,&c1);
int m1[r1][c1];
for (i=0;i<r1;i++) {
for (j=0;j<c1;j++) {
printf("enter value for %d row %d column matrix1:",i,j);
scanf("%d",&m1[i][j]);
}
}
printf("matrix:\n");
for (i=0;i<r1;i++) {
for (j=0;j<c1;j++) {
printf("%d\t",m1[i][j]);
}
printf("\n");
}
int t[c1][r1];
for (i=0;i<c1;i++) {
for (j=0;j<r1;j++) {
t[i][j]=m1[j][i];
}
}
printf("transposed matrix:\n");
for (i=0;i<c1;i++) {
for (j=0;j<r1;j++) {
printf("%d\t",t[i][j]);
}
printf("\n");
}
printf("\nCH.SC.U4CSE24110");
}
