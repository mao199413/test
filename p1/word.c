#include <stdio.h>

#define  IN   1
#define  OUT  0 

int main(void)
{
    int flag = OUT;
    char c;
    while((c=getchar())!=EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
           if(flag == IN){
               putchar('\n');
               flag = OUT;
           } 
        }else if(flag == OUT){
            flag = IN;
            putchar(c);
        }else{
            putchar(c);
        }            
    }
    return 0;
}
