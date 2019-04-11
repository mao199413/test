#include <stdio.h>

struct point{
    int y;
    char x;
}p1;

int main(void)
{
    printf("%d\n",sizeof(p1));
    return 0;
}

#if 0
int dist(int x,int y)
{
    return x*x+y*y;
}

struct point addpoint(struct point a,struct point b)
{
    struct point c;
    c.x=a.x+b.x
    c.y=a.y+b.y
    return c;
}

int ptinrect(struct point p

#endif
