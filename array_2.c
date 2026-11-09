#include<stdio.h>

int binary_search(int arr[], int n, int key);
void bubbleShort(int arr[], int n);

int main(){
    int n = 7;
    int arr[7] = {64, 25, 12, 22, 11, 90, 5};
    bubbleShort(arr, 7);
    printf("sorted: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");

    int result = binary_search(arr, 7, 22);

    if(result != -1){
        printf("found: %d\n", result);
    }else{
        printf("not found");
    }

    return 0;
}

void bubbleShort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key){
          return mid;
        }
        else if (arr[mid] < key){
          low = mid + 1;
        }
        else{
          high = mid - 1;
        }
    }
    return -1;
}