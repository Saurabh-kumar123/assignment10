#include<stdio.h>
int con(int,int);
int main()
{
     int n,d;
     printf("enter a number\n");
     scanf("%d",&n);
     printf("enter a digit\n");
     scanf("%d",&d);
     if(1==con(n,d))
     printf("digit is contain");
     else
          printf("digit is not contain");
     return 0;
}
int con(int n,int d)
{
     int l;
     while(n)
     {
      l=n%10;
      if(d==l)
     {
          return 1;
            break;
     }
     n=n/10;
     }
     return 0;
}
