#include<stdio.h>

void print(int n)
{
    if(n==0)
        return;
    printf("%d\n",n);
    print(n-1);
}
int main()
{
    int MKA;
    printf("Enter a Number which do you want print:\n ");
    scanf("%d",&MKA);
    printf("Your Natural Number is:\n");
    print(MKA);
}
