#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,rows=2,columns=2;
    int *fp = (int *)malloc(10 * sizeof(int));
    int **arr = (int **)malloc(rows * sizeof(int *));
    for(i = 0;i < rows;i++){
        arr[i] = (int *)malloc(columns * sizeof(int));
    }
    return 0;
}
