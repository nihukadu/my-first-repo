#include<stdio.h>

//Sum of array elements
//Given {4, 8, 15, 16, 23, 42}, print the sum.
//Expected: 108

int main(){
    int sum = 0;
    int n = 6;
    int arr[6] = {4, 8, 15, 16, 23, 42};

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}