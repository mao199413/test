#include <stdio.h>
#define Str(x) #x
#define Xstr(x) Str(x)
#define OP plus

int main(void)
{
//    char *p = Str(OP);
//    printf("%c\n",p);
//    p = Xstr(OP);
//    printf("%c\n",p);
    char *p = Str(plus);
    printf("%c\n",p);
    return 0;
}
