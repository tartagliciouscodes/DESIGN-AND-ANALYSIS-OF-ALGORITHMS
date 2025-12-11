//ch.sc.u4cse24110
//insertion sort
#include<stdio.h>
void insertionsort(int arr[], int n) {
for (int i=1;i<n;i++) {
int key=arr[i];
int j=i-1;
while (j>=0 && arr[j]>key) {
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]= key;
}
}
int main() {
int n;
printf("enter size of array:");
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++) {
printf("enter element at position %d:",i);
scanf("%d",&arr[i]);
}
insertionsort(arr,n);
printf("sorted array:");
for (int i=0;i<n;i++) {
printf("%d ",arr[i]);
}
printf("\n");
}
