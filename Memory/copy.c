#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* get_string(char *prompt){
    char* value = malloc(200 * sizeof(char)); // It will return the first adress 
    printf("%s: ",prompt);
    scanf("%s", value);
    return value;
    free(value);
}
int size_of_string(char* sizeString){
    int count = 0;
    while(*sizeString != '\0'){
        count++;
        sizeString++;
    }
    return count;
}
void string_copy(char* firstString, char* secondString){
    int size = size_of_string(firstString) + 1;
    for (int i = 0; i < size; i++){
        secondString[i] = firstString[i];
    }
}
int main(void){

    char* name = get_string("Enter your name");
    char* nameCopy = malloc(size_of_string(name + 1) * sizeof(*name));
    string_copy(name,nameCopy);
    printf("%s\n",nameCopy);
    strcpy(nameCopy,name); // it is exactly same with the string_copy function
    printf("%s\n",nameCopy);
    free(nameCopy);
}