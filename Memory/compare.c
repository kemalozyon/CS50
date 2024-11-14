#include <stdio.h>
#include <stdlib.h>
int string_count(char* s);
int string_comparison(char* s1, char* s2);

int main(void){
    char* string1 = malloc(sizeof(char)*200);
    char* string2 = malloc(sizeof(char)*200);
    printf("Enter first string: ");
    scanf("%s",string1);
    printf("Enter second string: ");
    scanf("%s",string2);
    if(string_comparison(string1, string2)){
        printf("They are same\n");
        
    }else{
        printf("They are not same!\\n");
    }
    free(string1);
    free(string2);
}

int string_comparison(char* s1, char* s2){
    int str_count = string_count(s1);
    if(str_count == string_count(s2)){
        for(int i = 0; i<str_count; i++){
            if(s1[i] != s2[i]){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}

int string_count(char* s){
    int count = 0;
    while (*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}