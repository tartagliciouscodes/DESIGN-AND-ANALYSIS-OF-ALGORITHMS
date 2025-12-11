//ch.sc.u4cse24110
//Bucket sort
#include <stdio.h>
#define MAX 100
void bucketsort(int arr[], int n) {
int bucket[MAX]={0};
for (int i=0;i<n;i++) {
bucket[arr[i]]++;
}
int k=0;
for (int i=0;i<MAX;i++) {
while(bucket[i]>0) {
arr[k++]=i;
bucket[i]--;
}
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
bucketsort(arr,n);
printf("sorted array: ");
for (int i=0;i<n;i++) {
printf("%d ",arr[i]);
}
printf("\n");
}