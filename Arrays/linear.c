#include <stdio.h>
int  i;
int linear(int a[], int n, int x) {
for(i=0; i<n; i++) {
if(a[i]==x)
return i;
}
return -1;
}
int main(void) {
int a[] = {2,3,4,10,40};
int x = 10;
int n = sizeof(a)/sizeof(a[0]);
int result = linear(a,n,x);
if(result==-1) {
printf("Element is not present in array\n");
}
else {
printf("Element found at index: %d\n",result);
}
return 0;
}