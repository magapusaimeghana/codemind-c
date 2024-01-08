#include <stdio.h>
int main ()
{
    float A,B;
    float Time;
    scanf("%f %f",&A,&B);
    Time=1/((1/A)+(1/B));
    printf("%0.0f",Time);
}