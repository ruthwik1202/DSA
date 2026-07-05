#include <stdio.h>
int main() {
    int n,a[10],ele,i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Enter element to be inserted: ");
    scanf("%d", &ele);
    n++;
    a[n-1] = ele;
    printf("After insertion array elements are: ");
    for(i=0; i<n; i++)
    printf("%d\t", a[i]);
    return 0;
}