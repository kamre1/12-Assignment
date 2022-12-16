#include<stdio.h>

void print(int n)
{
    if(n==0)
        return ;
    print(n-1);
    printf("%d\n",n);

}
int main()
{
  int a;
  printf("Enter a Number:\n");
  scanf("%d",&a);
  print(a);
  return 0;
}
