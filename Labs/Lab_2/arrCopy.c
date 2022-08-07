#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printArr(int *a, int size, char* name){
    printf("%s array's contents: ", name);
    for(int i = 0; i < size; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");
}

int* arrCopy(int *a, int size){
    // Allocates memory to hold all contents of the original array
    int *arr_copy = (int*)malloc(size * sizeof(int));
    int i = 0;
    int j = size - 1;

    // Copies from original array in reverse
	for(int i = 0; i < size; i++, j--){
        *(arr_copy + j) = *(a + i);
    }
    // Prints out reversed array
    return arr_copy;

    // Clears allocated memory
    free(a);
    free(arr_copy);
}

int main(){
    int n;
    int *arr;
    int *arr_copy;
    int i;
    printf("Enter the size of array you wish to create: ");
    scanf("%d", &n);

    //Dynamically create an int array of n items
    arr = (int*)malloc(n * sizeof(int));
    arr_copy = (int*)malloc(n * sizeof(int));

    //Ask user to input content of array
	for(int j = 0; j < n; j++){
        printf("Enter the array element #%d: ", (j + 1));
        scanf("%d", (arr + j));
    }
    printf("\n");
	
/*************** YOU MUST NOT MAKE CHANGES BEYOND THIS LINE! ***********/
	
	//Print original array
    printArr(arr, n, "Original");

	//Copy array with contents in reverse order
    arr_copy = arrCopy(arr, n);

	//Print new array
    printArr(arr_copy, n, "Copied");

    printf("\n");

    return 0;
}