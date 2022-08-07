#include <stdio.h>

int main() {
    int x, y, *px, *py;
    int arr[10];

    x = 0;
    y = 1;
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 5;
    arr[6] = 6;
    arr[7] = 7;
    arr[8] = 8;
    arr[9] = 9;

    px = &x;
    py = &y;

    printf("Value of px: %p, Address of px: %p \n", px, &px);
    printf("Value of py: %p, Address of py: %p \n", py, &py);

    for(int i = 0; i < 10; i++){
        printf("%d\n", *(arr + i));
    }

    printf("%p %p %p", arr, &arr[0], &arr);

    return 0;
}