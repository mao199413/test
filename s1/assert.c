#define NDEBUG
#include <assert.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static int val = 0;

static void fileld_abort(int sig)
{
    if (val == 1){
        puts("test success\n");
        exit(EXIT_SUCCESS);
    }else{
        puts("test failure\n");
        exit(EXIT_SUCCESS);
    }
} 

int main(void)
{
    int i = 0;
    assert(i == 0);
    assert(i == 1);
    return 0;
}
