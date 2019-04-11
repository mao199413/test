#include <stdio.h>

#define MAXLINE 1000

int getlines(char line[],int lim);
void reverse(char line[]);

int main(void)
{
    char s[MAXLINE];
    int len;
    while(getlines(s,MAXLINE) > 0){
        reverse(s);
        printf("%s\n",s);
    }
    return 0;
}

int getlines(char line[],int lim)
{
    int i;
    char c;
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++){
        line[i] = c;
    }
    if(c == '\n'){
        line[i]= c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/*int remove(char line[])
{
    int i=0;
    while(line[i]!='\n')
        ++i;
    --i;
    while(i >= 0 && s[i]== ' '||s[i]= '\t')
        --i;
    if(i>0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}*/

void reverse(char line[]){
    int i=0,j=0;
    char c;
    while(line[i]!='\0')
        ++i;
    --i;
    while(line[i]= '\n')
        --i;
    while(j<i){
       c=line[i]; 
       line[i]= line[j];
       line[j]= c;
       --i;
       ++j;
    }  
    return;
}


