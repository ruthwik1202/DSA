#include <stdio.h>
int main() {
    int arr[] = {10,21,32,45,50};
    int even=0, i, odd=0;
    for(int i=0;i<5;i++) {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\n",even);
    printf("Odd = %d\n",odd);
    return 0;
}