#include<stdio.h>

//Largest element
//Find and print the largest element in {12, 45, 7, 23, 89, 34, 56}.
//Expected: 89

int main(){
    int n = 7;
    int arr[7] = {12, 45, 7, 23, 89, 34, 56};
    int max = arr[0];

    for(int i = 1; i < n; i++){
      if(arr[i] > max){
        max = arr[i];
      }
    }

    printf("Max: %d", max);

    return 0;
}