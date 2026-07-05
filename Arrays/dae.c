#include <stdio.h>
int main() {
    int n,a[10],i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    n--;
    printf("After deletion array elements are: ");
    for(i=0; i<n-1; i++)
    printf("%d\t", a[i]);
    return 0;
}