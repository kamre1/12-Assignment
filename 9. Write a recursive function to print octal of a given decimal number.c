#include<stdio.h>

void OtoD(int n)
{
    if(n>=1)
    {
        OtoD(n/8);
        printf("%d",n%8);
    }
}
int main()
{
    OtoD(23);
}
