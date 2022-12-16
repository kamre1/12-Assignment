#include<stdio.h>

void PrintSquare(int n)
{
    if(n>1)
        PrintSquare(n-1);
        printf("%d\n",n*n);
}
int main()
{
    int MKA;
    printf("Enter a Number Would  you like to Print:\n ");
    scanf("%d",&MKA);
    printf("First N Natural Square Number is:\n");
    PrintSquare(MKA);
}
