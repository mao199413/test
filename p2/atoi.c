#include <stdio.h>

int atoi(char *s);

int main(void)
{
    char *s="1234";
    int a = atoi(s);   
    printf("%d,%s\n",a,s);
    return 0;
}

int atoi(char* s)
{
    int a;
    char c;
    while((c=*++s)!='\0'){
        if(c>='0'&&c<='9'){
            a=c-'0';    
        } 
        return a;
    }
    return -1;
}
