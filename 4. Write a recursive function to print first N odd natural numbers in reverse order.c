#include<stdio.h>

void print(int n)
{
   if(n>=1)

   {
       printf("%d\n",2*n-1);
        print(n-1);

   }
}
int main()
{
    int k;
    printf("Enter a Number is:\n");
    scanf("%d",&k);
    printf("First N Odd Number is:\n");
    print(k);
}

