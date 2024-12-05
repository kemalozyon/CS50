#include <stdio.h>

int main(void){
    int n = 50; // It is a declaration that assignes 50 to n and store it somewhere on RAM
    int* pointer = &n; // That assigns the value of where n is to pointer we just created
    printf("the address of n: %p the value of n: %d\n", pointer, *pointer);
    printf("The memory which has been allocated to a pointer is %zu in my Computer..\n", sizeof(pointer));
    //By writing just pointer we get the value of address
    //By writing *pointer we obtain the value where pointer points which address.
}