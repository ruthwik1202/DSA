#include <stdio.h>
int main() {
    int arr[] = {10,20,30,40,50};
    int sum = 0;
	int i;
    for(int i=0;i<5;i++)
        sum += arr[i];
    printf("Average = %.2f\n",(float)sum/5);
    return 0;
}