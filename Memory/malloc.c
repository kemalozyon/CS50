#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int* arr = (int*) malloc(5 * sizeof(int)); // It assign the integer 
    if(arr == NULL){ // We will check the arr if allocation process fails.

    }
    for (int i = 0; i < 5; i++){
        arr[i] = i+1;
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}