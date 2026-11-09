#include<stdio.h>

int linear_search(int arr[], int n, int key);

int main(){
	int arr[7] = {12, 45, 7, 23, 89, 34, 56};
	int result = linear_search(arr, 7, 23);
	printf("%d\n", result);
	return 0;
}

int linear_search(int arr[],int n,int key){
	for(int i = 0; i < n; i++){
		if(arr[i] == key)
			return i;
	}
	return -1;	
}
