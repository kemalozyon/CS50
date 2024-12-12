#include <stdio.h>
#include <stdlib.h>

char* get_string(char* promt){
    char* returnValue = malloc(200*sizeof(char));
    printf("%s",promt);
    scanf("%s",returnValue);
    return returnValue;
}
int main(void){
     FILE* phonebookFile = fopen("phonebook.csv","a");
     if (phonebookFile == NULL){
        printf("File cannot be opened!");
     }
     else{
        char* name = get_string("What is the name: ");
        char* number = get_string("What is the number: ");
        fprintf(phonebookFile, "%s,%s\n",name,number);
        fclose(phonebookFile);
     }
}