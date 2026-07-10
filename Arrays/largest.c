#include <stdio.h>
int main() {
int arr[] = {10,55,30,90,25};
int max = arr[0];
int i;
for( i=1; i<5; i++) {
if(arr[i]>max)
max = arr[i];
}
printf("Largest: %d\n", max);
return 0;
}