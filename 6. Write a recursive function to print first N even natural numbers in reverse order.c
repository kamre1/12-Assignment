#include<stdio.h>

void PrintEven(int n)
{
    if(n>0)
    {
      printf("%d\n",n*2);
      PrintEven(n-1);
    }
}
int main()
{
    int MKA;
    printf("Enter a Number which do you want to print:\n");
    scanf("%d",&MKA);
    printf("Even Natural Number is:\n");
    PrintEven(MKA);
}

