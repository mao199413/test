#include <stdio.h>

int a[6] = {1,2,3,4,5,6};

int main(void)
{
    char *arr[]={
        "hello",
        "world",
        "ni",
        "hao"
    };
    printf("%p\n",a+1);
    printf("%p\n",&a+1);
    return 0;
}
