#include <stdio.h>

struct s3
{
    double d;
    char c;
    int i;
}s5;

struct s4
{
    char c;
    struct s3 s;
    double d;
}s6;

int main(void)
{
    printf("s3 is %d,s4 is %d\n",sizeof(s5),sizeof(s6));
    return 0;
}
