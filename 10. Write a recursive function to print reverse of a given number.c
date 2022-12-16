#include<stdio.h>
void PrintReverse(int n)
{   if(n>=1)
    printf("%d\n",n);
    PrintReverse(n-1);
}
int main()
{
    int MKA;
    printf("Enter a Number Would  you like to Print:\n ");
    scanf("%d",&MKA);
    printf("Reverse of Given Number is:\n");
    PrintReverse(MKA);
}

