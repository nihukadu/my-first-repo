/*
Question:
Given a sorted array of integers that may contain duplicates, find the
index of the FIRST occurrence of a given key using binary search.
If the key is not present in the array, return -1.

Function:
    int first_occurrence(int arr[], int n, int key);

Example:
    arr = {2, 4, 4, 4, 7, 9, 9, 12}

    key = 4   ->  1
    key = 9   ->  5
    key = 12  ->  7
    key = 5   ->  -1 (not found)

Note:
    - The array is sorted in ascending order.
    - Use binary search.
*/  

`
#include<stdio.h>

int first_occurrence(int arr[], int n, int key);

int main(){
	int n = 8;
	int arr[8] = {2, 4, 4, 4, 7, 9, 9, 12};

	int result = first_occurrence(arr, n, 4);

	if(result != -1){
		printf("first occurrence: %d\n", result);
	}else{
		printf("not found\n");
	}

	return 0;
}

int first_occurrence(int arr[], int n, int key){
	int low = 0, high = n - 1;
	int result = -1;

	while(low <= high){
		int mid = low + (high - low) / 2;

		if(arr[mid] == key){
			result = mid;
			high = mid - 1;
		}else if(arr[mid] < key){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	return result;
}