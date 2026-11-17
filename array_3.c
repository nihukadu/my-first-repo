#include<stdio.h>

//Array: {10, 7, 25, 3, 40, 18, 15} no divisible by 5
//Expected: 10 25 40 15

int main(){
    int arr[7] = {10, 7, 25, 3, 40, 18, 15};
    int n = 7;

    binary_search(arr, n);

    return 0;

}

int binary_search(int arr[], int n){
    for(int i = 0; i < n; i++){
        if(arr[i] % 5 == 0){
            printf("%d\n", arr[i]);
        }
    }
}