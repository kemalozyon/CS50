#include <stdio.h>
void swap(int* x, int* y){
    /* 
    In this case, we cant swap variables without using adressing method
    */
    int temp = *x;
    *x = *y;
    *y = temp;
}
int get_int(char* prompt){
    int returnValue;
    printf("%s",prompt);
    scanf("%d", &returnValue);
    return returnValue;
}
int main(void){
    int firstInteger = get_int("What is your first number: ");
    int secondInteger = get_int("What is your first number: ");
    printf("%d %d\n",firstInteger,secondInteger); // Before swap
    swap(&firstInteger,&secondInteger);
    printf("%d %d\n",firstInteger,secondInteger); // After swap
}