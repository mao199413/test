#include <stdio.h>

#define  YES
#define  NO

int main(void)
{
    return 0;
}

htoi(char s[])
{
    int i=0,hexdigit,inhex;
    if(s[i] == '0'){
        ++i;
        if(s[i] == 'x' || s[i] == 'X'){
            ++i;
        }
    }
    inhex = YES;
    for(;inhex == YES;++i){
        if(s[i]>= '0' && s[i] <= '9'){
            heidigit = s[i] - '0';    
        }else if(s[i] >= 'a' && s[i]<= 'f'){
            heidigit = s[i] - 'a' + 10;
        }else if(s[i] >= 'A' && s[i] <= 'F'){
            heidigit = s[i] - 'A' + 10;
        }else{
            inhex == NO;
        }
        if(inhex == YES){
            n = 16*n+heidigit；
        }
    }
        return n;
}
