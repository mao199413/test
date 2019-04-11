#include <stdio.h>

unsigned getbits(int x,int n);

int main(void)
{
    int x = 8;
    unsigned y;
    y = getbits(x,4);
    printf("%d\n",y);
    return 0;
}

unsigned getbits(int x,int n)
{
    return x & ~(~0 << n);
}
