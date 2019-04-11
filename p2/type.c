#include <stdio.h>

int main(void)
{
    printf("signed char is min %d\n",-(char)((unsigned char)~0 >> 1));
    printf("signed char is %d\n",-(char)((unsigned char)~0 >> 1));
    printf("signed char is max %d\n",(char)((unsigned char)~0 >> 1));
    printf("signed char is %d\n",(char)((unsigned char)~0 >> 1));
    return 0;
}
