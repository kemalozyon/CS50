#include <stdio.h>
int stringCount(char* string);

//The code below is not contain any built-in string functions or other things it is written by a coder.

int main(void){
    char* strings[6] = {"battleship", "boot", "cannon", "iron", "thimble","top hat"};
    char target[100];
    printf("What is the word you want to find in the set: ");
    scanf("%s", target);
    int value = 1; // it is for the comlication we might encounter when we work with the strings that has same chars.

    for (int j = 0; j < 6; j++){
        if(stringCount(target) == stringCount(strings[j])){
            for (int i = 0, n = stringCount(target); i < n; i++){ // comparing strings
                if (target[i] != strings[j][i]){
                   value = 0;
                }
                if(value){
                    printf("The word you have been searching for is in the %dth index: ", j);
                    return 0;
                }
            }  
            value = 1;
        }         
    }
    printf("The value you have searched for is not exist in the set.");
    return 1;
}

int stringCount(char* string){
    
    int i = 0, count = 0;
    while(string[i] != '\0'){
        count++;
        i++;
    }
    return count;
}