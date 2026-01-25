//ch.sc.u4cse24110
//quick sort with all cases
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
int t = *a;
*a = *b;
*b = t;
}

int partition(int a[], int l, int r) {
int pivot = a[r];
int i = l - 1;

for(int j = l; j < r; j++) {
if(a[j] <= pivot) {
i++;
swap(&a[i], &a[j]);
}
}

swap(&a[i+1], &a[r]);
return i + 1;
}

int pivot_first(int l, int r) {
return l;
}

int pivot_last(int l, int r) {
return r;
}

int pivot_random(int l, int r) {
return l + rand() % (r - l + 1);
}

void quicksort(int a[], int l, int r, int (*pickPivot)(int,int)) {
if(l < r) {
int p = pickPivot(l, r);
swap(&a[p], &a[r]);
int pi = partition(a, l, r);
quicksort(a, l, pi - 1, pickPivot);
quicksort(a, pi + 1, r, pickPivot);
}
}

int main() {
int a[] = {157,110,147,122,111,149,151,141,123,112,117,133};
int n = sizeof(a)/sizeof(a[0]);

//quicksort(a, 0, n-1, pivot_first);
//quicksort(a, 0, n-1, pivot_last);
quicksort(a, 0, n-1, pivot_random);

for(int i = 0; i < n; i++)
printf("%d ", a[i]);

return 0;
}
