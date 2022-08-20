#include<stdio.h>
int fact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
          fact=fact*i;
  return fact;
}
 int main()
 {
      printf("%d",fact(5));
      return 0;
 }

