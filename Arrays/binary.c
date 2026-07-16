#include <stdio.h>
int binary_search(int a[], int size, int x) {
int low = 0;
int high = size-1;
while(low<=high) {
int mid = low+(high-low)/2;
if(a[mid]==x) {
return mid;
}
if(a[mid]<x) {
low = mid +1;
}
else {
high = mid-1;
}
}
return -1;
}
int main() {
int a[] = {12,10,07,28,11,07};
int size = sizeof(a)/sizeof(a[0]);
int x=28;
int result = binary_search(a,size,x);
if(result!=1) {
printf("Element found at index: %d\n",result);
}
else {
printf("Element not found in the array\n");
}
return 0;
}