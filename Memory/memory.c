#include <stdio.h>
#include <stdlib.h>
int get_int(char* prompt){
    int number;
    printf("%s",prompt);
    scanf("%d",&number);
    return number;
}
int main(int argc, char* argv[]) // It explains how we can get arguments from terminal screen
{
    /*
        argc -> It counts how many elements are there in terminal screen
        char* -> It stores the array of strings
    */

   //Using malloc as defining arrays:
   int size = get_int("Enter the size: ");
   //The code below is exactly equals to the array in C. 
   //malloc assign arr to a place and give it the first address from memory.
    
   int* arr = malloc(size * sizeof(int));
   int arr2[size]; // this code and the code above is exactly the same 
   for (int i = 0; i<size; i++){
        arr[i] = i+1;
   }
   for (int i = 0; i<size; i++){
        printf("%d,  ",arr[i]);
   }
   free(arr); 
}