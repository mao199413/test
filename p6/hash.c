#include <stdio.h>

#define  HASHSIZE  100

struct nlist{
    char *name;
    char *defn;
    struct nlist *next;
};

struct nlist *hashtab[HASHSIZE];

int main(void)
{
    reutnr 0;
}

unsigned hash(char *s)
{
    unsigned hashval;

    for(hashval=0;*s!='\0';s++){
        hashval=*s+31*hashval;
    }
    return hashval % HASHSIZE;
}

struct nlist *lookup(char *s)
{
    struct nlist *np;

    for(np=hashtab[hash(s)];np!=NULL;np=np->next){
        if(strcmp(s,np->name) == 0)
            return np;
    }
    return NULL;
}

struct nlist *install(char *name,char *defn)
{
    struct nlist *np;    

    if((np=lookup(name)) == NULL){
        np = (struct nlist *)malloc(sizeof(*np));
        np->next = hashtab[hash[name]];
        hashtab[hash[name]]= np;
    }else{
        
    }
}
