#include <stdio.h>
int main() {
int arr[] = {10,55,30,90,25};
int min = arr[0];
int i;
for(i=1; i<5; i++) {
if(arr[i]<min)
min = arr[i];
}
printf("Smallest: %d\n", min);
return 0;
}