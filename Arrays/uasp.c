#include <stdio.h>
int main() {
int n,i,a[10],pos,ele;
printf("Enter Size of Array: ");
scanf("%d", &n);
printf("Enter elements in array: ");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("Enter the position at which element is update: ");
scanf("%d", &pos);
printf("Enter the Element: ");
scanf("%d", &ele);
n++;
a[pos-1] = ele;
printf("After updation Array Elements are: ");
for(i=0; i<n; i++)
printf("%d\t",&a[i]);
return 0;
}
