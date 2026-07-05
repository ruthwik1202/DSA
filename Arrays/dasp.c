#include <stdio.h>
int main() {
    int n,a[10],pos,i;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("Enter the position at which element is deleted: ");
    scanf("%d", &pos);
    n--;
    for(i=pos; i<=n; i++)
    a[i-1] = a[i];
    printf("After deletion array elements are: ");
    for(i=0; i<n; i++)
    printf("%d\t", a[i]);
    return 0;
}