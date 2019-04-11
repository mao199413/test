#include <stdio.h>

int main(void)
{
    char c;
    int flag = 0;
    while((c=getchar())!=EOF){
        if(c == ' ' && flag != 1){
            putchar(c);
            flag=1;
        }else if(flag == 1){
            flag = 0;
        }else{
            putchar(c);
        }
    }
    printf("\n");
    return 0;
}
