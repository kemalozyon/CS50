#include <stdio.h>
#include <stdlib.h>
typedef char* string;
char* get_string(char* prompt){
    char* value = malloc(sizeof(char)*200); // It must be dynamic array allocation but I don't know yet
    printf("%s",prompt);
    scanf("%s", value);
    return value;
    free(value);
}
int main(void){
    char myString[] = {'H','i','!','\0'};
    char* p = &myString[0];
    while(*p != '\0'){
        printf("%c", *p);
        p++;
    }
    printf("%s", p);
    char* myName = get_string("What is your name: ");

    // The code above show us how strings take hand in c.

    //As it can be seen myName is a pointer that points the first character of the set.
    printf("%p",myName); // It will print the address of first character 
}
