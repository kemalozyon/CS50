#include <stdio.h>

int main(void){
     int numbers[] = {20,500,10,5,100,1,50};
     int n;
     printf("What is the number you are searching for: ");
     scanf("%d",&n);
     for (int i = 0; i < 7; i++){
        if(numbers[i] == n){
            printf("The number you are searching for is in the list at the rank of %d\n", i+1);
            return 1;
        }
     }
     return 0;
}