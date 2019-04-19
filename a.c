#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);

int main(void)
{
    int a = 3,b = 2,c;
    int (*s[2])(int d,int f) = {add,sub};
    c = (*s[0])(3,2);
    printf("%d\n",c);
    c = (*s[1])(3,2);
    printf("%d\n",c);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

add a.c for master branch
