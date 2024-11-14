#include <stdio.h>

int main(void){
    char* s = "HI!";
    while (*s != '\0')
    {
        printf("%c",*s);
        s++;// It is a pointer arithmetic.
    }
    printf("\n");
}