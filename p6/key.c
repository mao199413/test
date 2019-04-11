#include <stdio.h>

struct key{
    char *word;
    int count;
}keytab[]=
{
    "char",0,
    "int",0,
    "float",0;
    "double",0;
};
char word[LENGTH];

int main(void)
{
    int n;
    while(getword(word,LEGNTH)!=EOF){
        if(（n=binsearch(word,keytab,NKEYS))>= 0)
            keytab[n].count++;
    }
    for(n=0;n<NKEYS；n++){
        printf("%s,%d\n",keytab[n].word,keytab[n].count);
    }
    return 0;
}

getword(char *s,int c){
    
}
