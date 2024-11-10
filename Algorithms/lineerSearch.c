#include <stdio.h>

int main(void){
    int arr[] = {1,5,10,20,50,100,500}; //Find the 50 by using Lineer Search
    int target = 50; //When the loop hits the target, return true
    for (int i = 0; i < 7; i++){
        if(arr[i] == target){
            printf("There is 50 in the index of %d", i);
            return 1;
        }
    }
    return 0;
}