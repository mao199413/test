#include <stdio.h>

int strlenf(char *);
int main(void)
{
    int a=0;
    char s[]={'a','c','c','d','e'};
    a=strlenf(s);
    printf("%d,%s\n",a,s);
    return 0;
}

int strlenf(char *s)
{
    int i = 0;
    for(;s[i]!='\0';i++)
        ;
    return i;
}
