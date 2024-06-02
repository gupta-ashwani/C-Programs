//Selection sort

#include <stdio.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int arr[], int size){
	int i,j;
	for(i = 0; i < size-1; i++){
		for(j = i+1; j < size; j++){
			if(arr[i] > arr[j]){
				swap(&arr[j], &arr[i]);
			}
		}
	}
}

void printArray(int arr[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d\t", arr[i]);
	}
}

int main(){
	int size,i,j;
	printf("Enter size of array: ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		printf("Enter %d element of array: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Unsorted array: \n");
	printArray(arr, size);
	printf("\n");

	selectionSort(arr, size);
	
	printf("Sorted array: \n");
	printArray(arr, size);
	return 0;
}
