#include <stdio.h>

#define  TAB  4

int main(void)
{
    int c,nb,pos=1;
    while((c=getchar())!=EOF){
        if(c == '\t'){
            nb = TAB - (pos-1)%TAB;
            while(nb > 0){
                putchar(' ');
                nb--;
                pos++;
            }
        }eles if(c == '\n'){
            putchar(c);
            pos=1;
        }else{
            putchar(c);
            pos++;
        }
    }
    return 0;
}
