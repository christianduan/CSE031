#include <stdio.h>
#include <malloc.h>

int memAllocate(int **arr, int size, int element){
	for(int i = 0; i < size; i++){
		*(arr + i) = (int*)malloc(size * sizeof(int*));
		for(int j = 0; j < size; j++){
			*(*(arr + i) + j) = element;
		}
	}
}

int** matMult(int **a, int **b, int size) {
	// (4) Implement your matrix multiplication here. You will need to create a new matrix to store the product.
	int **matC = (int**)malloc(size * sizeof(int*));
	memAllocate(matC, size, 0);

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			for(int k = 0; k < size; k++){
				*(*(matC + i) +j) += *(*(a + i) + k) * *(*(b + k) + j);
			}
		}
	}
	return matC;
}

void printArray(int **arr, int n) {
	// (2) Implement your printArray function here
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

int main(){
	// int n = 3;
	// int o = 2;
	// int p = 1;
	int n;
	int o;
	int p;
	int **matA, **matB, **matC;

	// Tried to use user input, was not successful
	printf("What size arrays do you want to multiply: ");
	scanf("%d", &n);

	// (1) Define 2 (n x n) arrays (matrices). 
	matA = (int**)malloc(n * sizeof(int*));
	// Tried to use user input, was not successful
	printf("What contents do you want in the first array: ");
	scanf("%d", &o);
	memAllocate(matA, n, o);

	matB = (int**)malloc(n * sizeof(int*));
	// Tried to use user input, was not successful
	printf("What contents do you want in the second array: ");
	scanf("%d", &p);
	memAllocate(matB, n, p);

	// (3) Call printArray to print out the 2 arrays here.
	printArray(matA, n);
	printf("\n");
	printArray(matB, n);
	printf("\n");
	
	// (5) Call matMult to multiply the 2 arrays here.
	matC = matMult(matA, matB, n);
	
	// (6) Call printArray to print out resulting array here.
	printArray(matC, n);

    return 0;
}