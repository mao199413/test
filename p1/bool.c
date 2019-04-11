#include <stdio.h>

int main(void)
{
    char c,lastc = 'a';
    while((c=getchar())!=EOF){
        if(c != ' ' || lastc != ' ')
            putchar(c);
        lastc = c;
    }
    return 0;
}
