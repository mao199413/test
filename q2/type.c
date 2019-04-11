#include <stdio.h>

#define  PRINT(format,x)  printf(#x "= %" #format "\n",x)  

int integer = 5;
char character = '5';
char *string = "5";

int main(void)
{
    PRINT(d,string);PRINT(d,character);PRINT(d,integer);
    {
        int x = -2;
        unsigned int ux = -2;

        PRINT(o,x);PRINT(o,ux);
        PRINT(d,x/2);PRINT(d,ux/2);
        PRINT(o,x>>1);PRINT(o,ux>>1);
        PRINT(d,x>>1);PRINT(d,ux>>1);
    }
    return 0;
}
