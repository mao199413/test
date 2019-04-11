#include <stdio.h>

#define    lower  0
#define    upper  300
#define    step  20

int main(void)
{
    float fahr, cel;
    //int lower,upper,step;

//    lower = 0; upper = 300; step = 20;

    fahr = upper;
    printf("The tile\n");
    while(fahr >= lower){
        cel = (5.0/9.0) * (fahr -32.0);
        printf("%f %f\n",fahr,cel);
        fahr = fahr-step;
    }
    return 0;
}
