#include<stdio.h>
int even(int);
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     if(even(n)==1)
     printf("even");
     else
          printf("0");
     return 0;
}
 int even(int n)
 {
      if(n%2==0)
          return 1;
      else
          return 0;
 }
