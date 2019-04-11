#define  BUFSIZE  100

static char allocbuf[BUFSIZE]= {0};
static char *allocp = allocbuf;

char *alloc(int n)
{
    if(allocp+BUFSIZE-allocp>n){
        allocp+=n; 
        return allocp-n;
    }else{
        return ;
    }
}

void afree(char *p)
{
    if(p >= allocbuf && p < allocbuf + BUFSIZE){
        allocp-p;
    }
    return;
}
