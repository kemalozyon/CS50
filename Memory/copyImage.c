#include <stdio.h>
#include <stdlib.h>
typedef u_int8_t byte;
int main(int argc, char* argv[])
{
    FILE* src = fopen(argv[1], "rb");
    FILE* dst = fopen(argv[2],"wb");
    byte b;
    while(fread(&b,sizeof(b),1,src) != 0){
        fwrite(&b,sizeof(b),1,dst);        
    }
    fclose(src);
    fclose(dst);
}