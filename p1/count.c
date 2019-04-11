#include <stdio.h>

int main(void)
{
    char c;
    int blank=0,tab=0,newline=0;
    while((c = getchar())!=EOF){
       if(c == ' ')
           blank++;
       else if (c == '\t')
           tab++;
       else if (c == 'n')
           newline++;
    }
    printf("%d,%d,%d\n",blank,tab,newline);
    return 0;
}
