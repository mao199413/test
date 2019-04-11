#include <stdio.h>

int main(void)
{
    char c; 
    char flag=0;
    while((c = getchar())!=EOF){
        if(c != ' '){
            putchar(c);
        }else if(c == ' ' && flag !=1){
            putchar(c);
            flag = 1;
        }else{ 
            flag = 0;
        }
    }
    return 0;
}
