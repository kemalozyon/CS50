#include <stdio.h>

int main(void){
    int n = 50;
    int* p = &n;
    int** p2 = &p;
    int*** p3 = &p2;
    printf("3rd pointer is: %p\n",p3);
    printf("2nd pointer is: %p and %p\n",p2,*p3);
    printf("1st pointer is: %p\n", **p3);
    printf("The value is: %d\n", ***p3);
}