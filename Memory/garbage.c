#include <stdio.h>
#include <stdlib.h>

int get_int(char* prompt){
    int integerValue;
    printf("%s",prompt);
    scanf("%d",&integerValue);
    return integerValue;
}
int main(void){
    int n = get_int("How many garbage space do you want to display: ");
    int* address = malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++){
        printf("Garbage %d: %d \n", i+1, address[i]);
    }
    int* x; 
    int* y;
    x = malloc(sizeof(int));
    *x = 42;
    //*y = 13; -> To write this code is wrong thing due to the fact that y has not been allocated memory
    y = x;
    *y = 13;
    printf("%d",*x); // It will write 13 
}