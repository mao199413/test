#include <stdio.h>

#define MAXOP 100
#define NUMBER '0'

int main(void)
{
    int type;
    char s[MAXOP];
    while((type=getop(s)) != EOF){
        switch (type){
            case NUMBER:
                push(atof(s);    
                break;
            case '+';
                push(
        }
    }
    return 0;
}

void push(duble f)
{
    val[sp++] = f;

}
