#include <stdio.h>

#define PR3(a,b,c,d) printf(#b "= %" #a "\t" #c "= %" #a "\t" \
                                    #d "= %" #a "\t",b,c,d) 
#define PR1(a,b) printf(#b "= %" #a "\t",b) 
#define NL putchar('\n');

struct S1{
    char *s;
    int i;
    struct S1 *slp;
};

static struct S1 a[]={
    {"abcd",1,a+1},
    {"efgh",2,a+2},
    {"ijkl",3,a+3},
};

int main(void)
{
    int i;
    for(i = 0;i <= 2;i++){
        PR1(s,a[i].s);
    }
    PR1(s,a[i].s);
    PR1(s,a[i].s);
    NL;
    return 0;
}
