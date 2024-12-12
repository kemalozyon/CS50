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
    return 0; 
}