/*
Question:
Given an array of integers, sort it in ascending order using
bubble sort and print the sorted array.

Example:
    Input:  arr = {64, 25, 12, 22, 11}
*/

#include<stdio.h>

void bubbleSort(int arr[], int n);

int main(){
	int n = 5;
	int arr[5] = {64, 25, 12, 22, 11};

	bubbleSort(arr, n);

	printf("Sorted: ");
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void bubbleSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}