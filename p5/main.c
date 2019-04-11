#include <stdio.h>

char *alloc(int n);
void afree(char *p);

int main(void)
{
    int a=0;
    scanf("%d",&a);
    char *c=alloc(a); 
    printf("%s\n",c);
    return 0;
}
