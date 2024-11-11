#include <stdio.h>

void draw(int n){
    if(n <= 0){
        return;
    }
    //LIFO ORDER -> Last in First out.
    draw(n - 1);
        for (int j = 1; j <= n; j++){
            printf("#");
        }
        printf("\n");
    }

int main(void){
    draw(21);
}