#include <stdio.h>

int main() {
    int arr[] = {10,20,10,30,10};
    int key = 10;
    int count = 0;
	int i;

    for(int i=0;i<5;i++) {
        if(arr[i]==key)
            count++;
    }

    printf("Frequency of %d = %d\n",key,count);

    return 0;
}