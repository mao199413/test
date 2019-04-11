#include <stdio.h>

void squeeze(char *s1,char *s2,char *s3);
int main(void)
{
    char *s1 = "11234";
    char *s2 = "01567";
    char *s3 = NULL;
    squeeze(s1,s2,s3);
    printf("%s,%s,%s\n",s1,s2,s3);
    return 0;
}

void squeeze(char s1[],char s2[],char s3[])
{
    int i,j,k;
    for(i=k=0;s1[i]!='\0';i++){
        for(j=0;s2[j]!='\0'&&s2[j]!=s1[i];j++)
            ;
        if(s2[j] == '\0')
            s3[k++] = s1[i];
    }
    s3[k] = '\0';
}
