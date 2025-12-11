//ch.sc.u4cse24110
//minheap sort
#include <stdio.h>
void heapify(int arr[], int n, int i) {
int smallest=i;
int left=2*i+1;
int right=2*i+2;

if (left<n&&arr[left]<arr[smallest])
smallest=left;
if (right<n&&arr[right]<arr[smallest])
smallest=right;

if (smallest!=i) {
int temp=arr[i];
arr[i]=arr[smallest];
arr[smallest]=temp;

heapify(arr,n,smallest);
    }
}

void minheapsort(int arr[], int n) {
for (int i=n/2-1;i>=0;i--) {
heapify(arr,n,i);
    }
for (int i=n-1;i>=0;i--) {
int temp=arr[0];
arr[0]=arr[i];
arr[i]=temp;

heapify(arr,i,0);
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

minheapsort(arr,n);
printf("sorted array: ");
for (int i=0;i<n;i++) {
printf("%d ",arr[i]);
}
printf("\n");
}