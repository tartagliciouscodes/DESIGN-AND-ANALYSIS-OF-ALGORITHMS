//ch.sc.u4cse24110
//selection sort
#include<stdio.h>
void selectionsort(int arr[], int n) {
for (int i=0; i<n-1; i++) {
int minIndex=i;
for (int j=i+1; j<n; j++) {
if (arr[j]<arr[minIndex]) {
minIndex=j; }
}
if (minIndex!=i) {
int temp= arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp; }
}    }
int main() {
int n;
printf("enter size of array:");
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++) {
printf("enter element at position %d:",i);
scanf("%d",&arr[i]);
}
selectionsort(arr,n);
printf("sorted array:");
for (int i=0;i<n;i++) {
printf("%d ",arr[i]); }
printf("\n"); }
